#include <iostream>
#include <iterator>
#include <vector>

// // pass by value and pass by reference explination by single input
// void passbyvalue (int arg){
//     std::cout<< "x value in passbyvalue : " << arg << "\n";
//     std::cout<< "x value in passbyvalue  address: " << &arg << "\n";
//     arg = 5000;
// }

// void passbyref(int& arg){
//     std::cout<< "x value in passbyref : " << arg << "\n";
//     std::cout<< "x value in passbyref address: " << &arg << "\n";
//     arg = 5000;
// }

// int main (){
//     int x = 42;
//     std::cout<< "x  : " << x << "\n";
//     std::cout<< "x address : " << &x << "\n";
//     passbyvalue(x);
//     passbyref(x);
//     std::cout<< "x  : " << x << "\n";
//     std::cout<< "x address : " << &x << "\n";
// }


//pass by value and pass by reference explination by very large vector input
void passbyvalue (std::vector<int> arg){
    arg[0] = 1;
}

void passbyref(std::vector<int>& arg){
    arg[0] = 1;
}

// make data in arg readonly
// void passbyref(const std::vector<int>& arg){
//     arg[0] = 1;
// }

int main (){

std::vector<int> x(100000000);
std::fill(std::begin(x),std::end(x),1);

// passbyvalue(x);
passbyref(x);

}

//g++ passByRef.cpp && time ./a.out 
// run to see the program take time in execution 
// run by reference take much less run time 
