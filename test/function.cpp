#include <iostream>

// //function declaration
// int add (int a, int b);
// float add (float a, float b);

// int main() {   

//     std::cout<< "the sum " << add(3.3f,4.9f) << '\n';
    
//     return 0;    
// }

// int add (int a, int b) {
//     std::cout<< "int add" << "\n";
//     return a+b;
// }

// float add (float a, float b) {
//     std::cout<< "float add" << "\n";
//     return a+b;
// }

//recursion 
int countdown(int n) {
    //base case
    if (n==0){
        std::cout<< "the final call" << '\n';
        return 0;
    }
    //recursion case
    std::cout<< n << '\n';
    return countdown(n - 1);
}

int main () {
    countdown(9);  // we are limit by the stack size to avoid stack overflow
    return 0;
}


