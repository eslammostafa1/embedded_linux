#include <algorithm>
#include <array>
#include <iostream>
#include <vector>

int main() {
    int n, q;
    char c;
    // int arr[10]; //don not work with sort method
    // std::array<int , 10>arr; // must has a fixed size
    // std::vector<int>arr; //segmentation fault (core dumped)

    std::cout<< "enter the length of the array: " << '\n';
    std::cin>> n ;
    std::cout<< "sort ascending or descending ( a or d ): " << '\n';
    std::cin>> c ;
    std::vector<int>arr(n);
    for(int i = 0; i < n; i++){
        std::cout<< "enter the "<< i+1 << " value of the array: " << ' ';
        // std::cin>> q ;
        // arr[i]= q;
        std::cin >> arr[i] ;
    }
    
    std::sort(arr.begin(),arr.end(),
     c == 'a' ? 
     [](int x, int y){return x < y;} : 
     [](int x, int y){return x > y;}
     
     );
        std::cout << "Modified array is \n";
        for (int num : arr)
            std::cout << num << " ";
        std::cout << "\n";
}