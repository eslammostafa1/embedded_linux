// Object Delegation
#include <iostream>

class First {
public:
    void print() { std::cout << "The Delegate" << '\n'; }
};
class Second {
    // Creating instance of the class
    First ob;
 
public:
    void print() { ob.print(); }
};
 
// Driver Code
int main()
{
    Second ob1;
    ob1.print();
    return 0;
}