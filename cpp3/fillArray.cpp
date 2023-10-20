#include <iostream>

int main() {
    int n, start = 0;

    std::cout << "Enter the length of the array: " << '\n';
    std::cin >> n;
    std::cout << "Enter the start of the array: " << '\n';
    std::cin >> start;

    // Make sure this is large enough to accommodate the maximum required size (10,000).
    int arr[n] ;

    for (int i = 0; i < n - start + 1; i++) {
        arr[i] = start + i;
        
    }

    std::cout << "the array: " << '\n';
    for (int i = 0; i <  n - start + 1; i++) {
        std::cout << arr[i] << ' ';

    }
    std::cout << '\n';
    return 0;
}
