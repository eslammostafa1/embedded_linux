#include <iostream>

// /

//reference  or alias 
int main (){
    int x = 42;
    int& ref = x;

    // illegal to set a pointer to a null value and make reference to it.
    int* y = nullptr;
    int& ref2 = *y;

    std::cout<< "y : " << y << "\n";
    std::cout<< "y : " << &y << "\n";

    std::cout<< "x : " << x << "\n";
    std::cout<< "x : " << &x << "\n";

    std::cout<< "ref : " << ref << "\n";
    std::cout<< "ref : " << &ref << "\n";
}
