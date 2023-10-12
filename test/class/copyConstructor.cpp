#include <iostream>

class Array {
    public:
        Array(){
            std::cout << "constructor" << '\n';
            data = new int[10];
            for (int i = 0; i < 10; i++) {
                data[i] = i*i;
            }
        };
        ~Array(){
            delete[] data;
        };
        Array(const Array& deepCopy){
            std::cout << "copy constructor" << '\n';   
            data = new int[10];
            for (int i = 0; i < 10; i++) {
                data[i] = deepCopy.data[i];
            }
        };
        void printArray() {
            for (int i = 0; i < 10 ; i++) {
                std::cout<< data[i] << '\n';         
            }
        };
        void setData(int index, int value){
            data[index] = value;
        }
    private:
        int* data; 
};

int main() {
    //this code show how the copy in point to the copied array do not take an actual place in the memory. 
    // Array array1;
    // array1.setData(0, 309939);
    // array1.setData(1, 309940);
    // array1.setData(2, 309941);
    // array1.printArray();
    // // copy constructor make a pointer to the main object
    // Array array2 = array1;
    // array2.printArray();
    // return 0;


    Array array1;
    // copy constructor make a pointer to the main object
    Array array2 = array1;
    array1.setData(0, 309939);
    array1.setData(1, 309940);
    array1.setData(2, 309941);
    array1.printArray();
    array2.printArray();
    return 0;

}