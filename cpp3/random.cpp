#include <iostream>

int &f(){
    static int x = 0;
    static int z = 0;
    static char y = 97;
    std::cout << "x:" <<  x << '\n';
    std::cout << "y:" << y << '\n';
    std::cout << "z:" << z << '\n';

    return x;
};

int main() {
    f()=10;
    f()=0;
    f() = 'b';
}
