#include <iostream>

//evaluate the value of the function or variable at compile time.

constexpr int add(int a, int b) {
    return a+b;
}

int main() {   

    int i =  add(5, 8);
    i++;
    std::cout<< i << "\n";

    return 0;
}
