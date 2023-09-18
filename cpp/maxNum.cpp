#include "iostream"
#include<algorithm>

bool compare(int a, int b) {
    return (a < b);
}

int main() {
    int a, b, c = 0;
    std::cout<< "enter 3 number you want to compare: ";
    std::cin>> a >> b >> c;
    std::cout<< "the max number is " <<std::max({a,b,c}, compare) << "\n";
}