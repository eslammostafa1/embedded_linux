#include "iostream"

void decToBin(int n) {
    int binArr[8];

    int i = 0;
    while (n > 0) {
        binArr[i] = n % 2;
        n = n / 2;
        i++; 
    }

    for (int j = i - 1; j >= 0; --j) {
        std::cout<< binArr[j];
    }
    std::cout<< '\n';
}

int main() {
    int num;
    std::cout<< "enter a inter numbers : ";
    std::cin>>num;
    std::cout<< "you enter: " << num << '\n';
    decToBin(num);
    return 0;
}