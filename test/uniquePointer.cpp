#include <iostream>
#include <memory>
#include <string>

class UserType{
    public:
        UserType() : name("Default") {std::cout << "UserType " << name << " created" << '\n';}
        UserType( std::string name) : name(name) {std::cout << "UserType "<<name<< " created" << '\n';}
        ~UserType(){std::cout << "UserType destroyed" << '\n';}
    private:
        std::string name;
};

// raw pointer:
// allow error when forgetting to deallocate
// tolerate owership
// smart pointer solve this problems

int main() {
    {    
        std::cout << "---------------------------unique_ptr---------------------------" << '\n';
        //create one unique pointer 
        //unique pointer allow move but do not allow sharing no copies are allowed
        std::unique_ptr<UserType> eslam = std::unique_ptr<UserType>(new UserType("eslam"));
        std::unique_ptr<UserType> joe = std::move(eslam);

        //create array of  unique pointer 
        //delete done by block scope you donot have to delete 
        // std::unique_ptr<UserType[]> mai = std::unique_ptr<UserType[]>(new UserType[10]);

        // std::unique_ptr<UserType[]> ali = std::make_unique<UserType[]>(5);

        std::unique_ptr<UserType[]> pola(new UserType[3]{
            UserType("pola"),
            UserType("pola"),
            UserType("pola")
        });

    }
    std::cout << "---------------------------shared_ptr---------------------------" << '\n';
    std::shared_ptr<UserType> sh1 = std::make_shared<UserType>();
    {
        std::shared_ptr<UserType> sh2 = sh1;
        // use_count returns the number of shared_ptr objects referring to the same managed object
        std::cout << "count shared pointer 2 : " << sh2.use_count() << '\n';
    }

    std::cout << "count shared pointer 1 : " << sh1.use_count() << '\n';
    std::cout << "---------------------------weak_ptr---------------------------" << '\n';
    // non-owning pointer 
    // do not increase reference count 
    std::weak_ptr<UserType> w2 ;
    {
    std::weak_ptr<UserType> w1 = std::make_shared<UserType>();
    w2 = w1;
    }
    std::cout << "w2 expired : " << w2.expired() << '\n';
    return 0;
}