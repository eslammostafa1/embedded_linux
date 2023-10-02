#include <iostream>
#include <vector>

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

// //recursion 
// int countdown(int n) {
//     //base case
//     if (n==0){
//         std::cout<< "the final call" << '\n';
//         return 0;
//     }
//     //recursion case
//     std::cout<< n << '\n';
//     return countdown(n - 1);
// }

// int main () {
//     countdown(9);  // we are limit by the stack size to avoid stack overflow
//     return 0;
// }


// // function pointer
// void hello(int a ) {
    
//     std::cout<< "hello world!  " << a << "\n";
// }

// int main() {
//     // // normal call function
//     // hello(); 
    
//     // // get the function pointer
//     // auto fun = &hello; 
//     // fun();

//     // // void(*)() this is the type of the function pointer and funName is the type name
//     // void(*funName)() = hello; 
//     // funName();

//     // use alias for the type
//     typedef void(*funName2)(int);
//     funName2 helloAlias = hello;
//     helloAlias(3);

//     return 0;
// }


//use pointer function to make a callback function

void printValue(int val) {
    std::cout<< "the value is :   " << val << "\n";
}

void ForEach(const std::vector<int>& values,void(*fun)(int)) {
    for (int value : values)
        fun(value);
} 

// int main() {
//     std::vector<int> values = {1, 2, 3, 4};
//     // this function will apply the callback function (printValues) to each value in the vector.
//     ForEach(values, printValue);
// }

int main() {
    std::vector<int> values = {1, 2, 3, 4};
    // this function will apply the callback function using lambda to each value in the vector.
    auto lambda= [](int value){std::cout<< "the value is :   " << value << "\n";};
    ForEach(values, lambda);
}
