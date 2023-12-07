#include <iostream>
#include <memory>
class User{
    public:
        User(){std::cout << "user created" << '\n';}
        ~User(){std::cout << "user destroyed" << '\n';}

};

int main() {
    std::unique_ptr<User> eslam = std::unique_ptr<User>(new User);
    
    std::unique_ptr<User[]> mai = std::unique_ptr<User[]>(new User[10]);

    std::unique_ptr<User[]> ali = std::make_unique<User[]>(5);

    return 0;
}