#include <algorithm>
#include <iostream>

int main() {
    int n, q,i, num;
    int arr[10];
    std::cout<< "enter the length of the array: " << '\n';
    std::cin>> n ;
    for( i = 0; i < n; i++){
        std::cout<< "enter the "<< i+1 << " value of the array: " << '\n';
        std::cin>> q ;
        arr[i]= q;
    }
          
    std::cout << "Enter a number to DELETE in Array: ";
    std::cin >> num;

    for (i = 0; i < n; i++) {
        if (arr[i] == num) {
            break;
        }
    }


    // If x found in array
    if (i < n) {
        // reduce size of array and move all
        // elements one space ahead
        n = n - 1;
        for (int j = i; j < n; j++) {
            arr[j] = arr[j + 1];
        }
    }

    std::cout << "Modified array is \n";
    for (int i=0; i<n; i++)
        std::cout << arr[i] << " ";
    std::cout << "\n";
}