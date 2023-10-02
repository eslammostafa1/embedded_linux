#include <algorithm>
#include <iostream>

int main() {
    int n, q;
    int arr[10];
    std::cout<< "enter the length of the array: " << '\n';
    std::cin>> n ;
    for(int i = 0; i < n; i++){
        std::cout<< "enter the "<< i+1 << " value of the array: " << '\n';
        std::cin>> q ;
        arr[i]= q;
    }

    std::cout << "the max number in the array is : " << *std::max_element(arr, arr+n) << std::endl;
    // std::cout << "Array elements: ";
    // for (int i = 0; i < n; i++) {
    //     std::cout << arr[i] << ' ';
    // }
    // std::cout << '\n';

    return 0;
}