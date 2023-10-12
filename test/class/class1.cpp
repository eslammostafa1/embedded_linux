#include <iostream>

class Person {
    public:
    //special action - constructor 
        Person( std::string namePrv ) : namePrv(namePrv){ 
            std::cout<< "constructor is called for " << namePrv  << '\n';
        }
    //special action - destructor 
        ~Person(){
            std::cout<< "destructor is called "<< namePrv << '\n';
        }
        void printName( ) {
            std::cout<< "person name is "<< namePrv << '\n';
        }
    private:
        std::string namePrv;
};

    int main () {
    std::cout<< "program start" << '\n';    
    
    //using scoope 
    // {
    //     Person ali("ali");
    // }
    
    // direct call class
    // Person mai("mai");
    
    // using new 
    // Person* mona = new Person("mona");
    // delete mona;

    Person amir("amir");
    amir.printName();

    Person joe("joe");
    joe.printName();

    std::cout<< "program end" << '\n';
    return 0;
}
