#include "iostream"

int main() {

    while (true) {    
        char s, choice;
        std::cout << "enter any character: " << "\n";
        std::cin>> s;
        if (s == 'a' || s == 'u' || s == 'o' || s == 'i' || s == 'e') {
            std::cout << "This is a vowel letter." << '\n';
        }
        std::cout << "do you want to try again? yes (y) or no (n)" << "\n";
        std::cin>> choice;
        if (choice == 'n') 
            break;
    }


}