#include "iostream"
#include<algorithm>

int main() {
    int a = 0;
    std::cout<< "enter number you want multiplication table: ";
    std::cin>> a;
    for (int i = 0; i <= 10; i++)
        std::cout << " |       " << i << " x " << a << " = " << a*i <<  "\n";
    std::cout << '\n';
}