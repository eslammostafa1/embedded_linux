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
          
    std::cout << "Enter a number to serach in Array: ";
    std::cin >> num;
      
    // search num in inputArray from index 0 to elementCount-1 
    for( i = 0; i < n; i++){
        if(arr[i] == num){
            std::cout << "Element " <<  arr[i] << " found at index " << i << " in the array." <<'\n';
            break;
        }
    }
      
    if(i == n){
        std::cout  << "Element Not Present in Input Array\n";
    }
 
}