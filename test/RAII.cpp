#include <cstddef>
#include <iostream>

// RAII it is programming techniques

// // run valgrind we find leackage
// // ==15043== HEAP SUMMARY:
// // ==15043==     in use at exit: 40 bytes in 1 blocks
// // ==15043==   total heap usage: 2 allocs, 1 frees, 73,768 bytes allocated
// // ==15043== 
// int main() {
//     int* value = new int[10];
//     value[0]=7;
//     return 0;
// }

// --------------------
// // run valgrind we find leackage
// ==16688== HEAP SUMMARY:
// ==16688==     in use at exit: 0 bytes in 0 blocks
// ==16688==   total heap usage: 2 allocs, 2 frees, 73,768 bytes allocated
// ==16688== 
// ==16688== All heap blocks were freed -- no leaks are possible
// ==16688== 
#include <iostream>
class Collect {
    public:
        Collect(){
            data = new int[10];
            
        }
        ~Collect(){
            delete[] data;
        }
        int& operator[](std::size_t idx){
            return data[idx];
        }
        const int& operator[](std::size_t idx) const {
            return data[idx];
        }

    private:
        int* data ;
};
int main() {
    Collect collect1;
    collect1[0]=2;
    std::cout << collect1[0] << '\n';
    return 0;
}