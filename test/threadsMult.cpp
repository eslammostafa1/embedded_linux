#include <iostream>
#include <thread>
#include <vector>


auto lambda=[](int x){
    std::cout << " thread id with lambda :" << std::this_thread::get_id() << '\n';
    std::cout << " passed argument : " << x << '\n';
};

int main() {
    std::cout << "----- my main thread --------" << '\n';

    // // this execute one thread one time and close the thread before the next thread created    
    // std::vector<std::thread> threadvec;
    // for (int i=0; i <10; i++) {
    //     threadvec.push_back(std::thread(lambda, i));
    //     threadvec[i].join();
    // }

    // this execute 10 threads and 
    std::vector<std::thread> threadvec2;
    for (int i=0; i <10; i++) {
        threadvec2.push_back(std::thread(lambda, i));
    }
    for (int i=0; i <10; i++) {
        threadvec2[i].join();
    }
        
    // // this execute 10 threads by using jthread it join by its destrcutor c++20 
    // std::vector<std::jthread> jthreadvec2;
    // for (int i=0; i <10; i++) {
    //     jthreadvec2.push_back(std::jthread(lambda, i));
    // }

        
    return 0;
}