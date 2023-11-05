#include <algorithm>
#include <iostream>
#include <vector>

class Int {
    public:
        int *ptr;
        int x;
        // explicit Int(int *ptr) {std::cout << "Param" << '\n';}
        // previous line make segmentation fault becouse The problem arises when the destructor for both i1 and i2 is called when they go out of scope. Since both objects share the same ptr, the destructor for the second object to be destroyed will attempt to delete the ptr again, resulting in a double deletion of the same memory. This double deletion leads to undefined behavior, including the segmentation fault you observed.
        Int(int *ptr) : ptr(ptr), x(*ptr) { // parameterized constructor
            std::cout << "Param constructor" << '\n';
            }
        
        Int() {} // default constructor
        Int(const Int &other) { // copy constructor
            std::cout << "Copy constructor " << '\n';
            // this->ptr = new int(*other.ptr);
        if (other.ptr) { 
            ptr = new int(*other.ptr);
        } else {
            ptr = nullptr;
        }
        };  
        Int &operator=( Int &other) { //&& means that parameter is lvalue
            std::cout << "Copy assigment " << '\n';

            if(&other == this){
                std::cout << "other == this" << '\n';
                return *this;
            } 
            x = other.x;
            if (ptr){
                delete ptr;
            }
            if(other.ptr){
                ptr = new int(*other.ptr);

            } else {
                ptr = nullptr;
            }
            // ptr = (other.ptr) ? new int(*(other.ptr)) : nullptr;
            return *this;
        }
        Int(Int &&other) { //move constructor
            std::cout << " move constructor " << '\n';
            if(other.ptr){
                ptr = other.ptr;
                other.ptr = nullptr;
            }
            x = other.x;
        }
        Int &operator=(Int &&other){ //&& means that parameter is rvalue
            std::cout << " move assigment operator= " << '\n';
            if(&other != this){
                x = other.x;
                other.x = 0;
                if(ptr){
                    delete ptr;
                }
                ptr =other.ptr;
                other.ptr = nullptr;
            }
            return *this;
        }
        ~Int(){
            delete ptr;
        }
};
Int getInt (){
    Int i ;
    return i;
}

int main() {
    // Int i1(new int(5));
    // std::cout << "-----------------------" << '\n';
    // Int i2(i1); //copy constructor because there is a class name in the begining
    // std::cout << "-----------------------" << '\n';
    // Int i3;
    // std::cout << "-----------------------" << '\n';
    // i2 = i1; //copy assigment  because there is not a class name in the begining
    // std::cout << "-----------------------" << '\n';

    // i1 = i2;
    // std::cout << "-----------------------" << '\n';

    
    // *(i2.ptr) = 10;
    // std::cout << *(i1.ptr) << '\n';
    // std::cout << *(i2.ptr) << '\n';

    std::cout << "---------------move constructor ----------------" << '\n';
    int x = 5;
    int &&x2 = std::move(x); // convert x from lvalue to rvalue
    std::cout << x << " " << &x<< '\n';
    std::cout << x2 << " " << &x2<< '\n';
    std::vector<int> v = {1,2,3,4,5,7};
    std::vector<int> v2 = std::move(v);
    std::cout << v.size() <<  " " << &v <<  '\n';
    std::cout << v2.size() <<  " " << &v2 <<  '\n';

    Int y(new int(7));
    // Int y2(std::move(y));
    Int y2(new int(3));
    std::cout << y.ptr << '\n';
    std::cout << y2.ptr << '\n';
    y2 = std::move(y);
    std::cout << y.ptr << '\n';
    std::cout << y2.ptr << '\n';

     
    return 0;
}
