#include <iostream>

int main (){
    int x = 42;
    int& ref = x; // reference value 

    int* px = &x;

    *px =  45;

    std::cout<< "x  : " << x << "\n";
    std::cout<< "x  addr : " << &x << "\n";
    
    std::cout<< "px  : " << px << "\n";
    std::cout<< "px addr : " << &px << "\n";
    std::cout<< "px dereferencing the pointer : " << *px << "\n";

    std::cout<< "ref  : " << ref << "\n";
    std::cout<< "ref addr : " << &ref << "\n";

}
