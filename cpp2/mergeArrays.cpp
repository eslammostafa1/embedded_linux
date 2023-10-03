#include <iostream>

void insertArray ( int arr1[], int arr2[], int arr3[], int n1, int n2 ) {

    int i=0;
    int j=0;
    int s=0;

    while (i < n1) {
        std::cout<< "enter value n1 element " << i+1 << '\n';
        std::cin>> arr1[i];
        i++; 
    }
    while (j < n2) {
        std::cout<< "enter value n2 element " << j+1 << '\n';
        std::cin>> arr2[j];
        j++; 
    }
    int z = 0;
    int y = 0;
    while ( z < n1) {
        arr3[s++] = arr1[z++];

    }
    while ( y < n2) {
        arr3[s++] = arr2[y++];
        
    }


}

int main() {

    char quiting;
    while ( true ) {
        int n1 , n2;
        std::cout<< "enter the length of the first array: " << '\n';
        std::cin>> n1 ;
        std::cout<< "enter the length of the second array: " << '\n';
        std::cin>> n2 ;
        int arr1[n1];  
        int arr2[n2];
        int arr3[n1+n2];

        insertArray( arr1, arr2, arr3, n1, n2 );
        
        std::cout << "Modified array is \n";
        for (int i=0; i < n1+n2; i++)
            std::cout << arr3[i] << " ";
        std::cout << "\n";
        
        std::cout<< "do you want to enter anther array: " << '\n';
        std::cin>> quiting ;
        if ( quiting == 'n')
            break;
        }


}