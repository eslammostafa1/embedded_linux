#include <iostream>

std::pair<int, int>  insertArray ( int arr[], int arrOdd[], int arrEven[], int n1) {

    int i=0;
    int s=0;

    while (i < n1) {
        std::cout<< "enter value n1 element " << i+1 << '\n';
        std::cin>> arr[i];
        i++; 
    }

    int y = 0;
    int w = 0 ;
    while ( s < n1) {
        if (arr[s] % 2 == 0){
            arrEven[y] = arr[s];
            y++;
        }
        else {
            arrOdd[w] = arr[s];
            w++;
        }
        s++;
    }

    return std::make_pair(y, w);
}

int main() {

    char quiting;
    while ( true ) {
        int n1 ;
        std::cout<< "enter the length of the array: " << '\n';
        std::cin>> n1 ;

        int arr[n1];  
        int arrOdd[10];
        int arrEven[10];

        std::pair<int, int> result = insertArray(arr, arrOdd, arrEven, n1);
        int y = result.first;
        int w = result.second;
        
        std::cout << "Even array is \n";
        for (int i=0; i < y; i++)
            std::cout << arrEven[i] << " ";
        std::cout << "\n";

        std::cout << "Odd array is \n";
        for (int i=0; i < w; i++)
            std::cout << arrOdd[i] << " ";
        std::cout << "\n";
        
        std::cout<< "do you want to enter anther array: ('y' (or) 'n')" << '\n';
        std::cin>> quiting ;
        if ( quiting == 'n')
            break;
        }


}