#include <iostream>
#include <memory>

class UserType{
    public:
        UserType(){std::cout << "UserType created" << '\n';}
        ~UserType(){std::cout << "UserType destroyed" << '\n';}

};

// raw pointer:
// allow error when forgetting to deallocate
// tolerate owership
// smart pointer solve this problems

int main() {
    //create one unique pointer 
    //unique pointer allow move but do not allow sharing no copies are allowed
    std::unique_ptr<UserType> eslam = std::unique_ptr<UserType>(new UserType);
    std::unique_ptr<UserType> joe = std::move(eslam);

    //create array of  unique pointer 
    //delete done by block scope you donot have to delete 
    // std::unique_ptr<UserType[]> mai = std::unique_ptr<UserType[]>(new UserType[10]);

    // std::unique_ptr<UserType[]> ali = std::make_unique<UserType[]>(5);

     std::unique_ptr<UserType[]> pola(new UserType[3]);

    return 0;
}