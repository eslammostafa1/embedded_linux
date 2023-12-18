#include <iostream>
#include <thread>
#include <vector>
#include <mutex>


auto lambda=[](int x){
    std::cout << " thread id with lambda :" << std::this_thread::get_id() << '\n';
    std::cout << " passed argument : " << x << '\n';
};

// mutex synchronization primitive that can be used to protect shared data from being simultaneously accessed by multiple threads.
std::mutex glock;
static int shared_val = 0;
void shared_val_increment(){
    std::lock_guard<std::mutex> gGuard(glock);
        shared_val = shared_val +1;
        
    // repalce lock and unlock with lock_guard 
    // glock.lock();
    // try{
    //     shared_val = shared_val +1;
    //     throw " aborted ....";
    // }
    // catch(...){
    //     std::cout << "handle exception" << '\n';
    //     glock.unlock();
    // return;
    // }
    // glock.unlock();
}

int main() {
    std::cout << "----- my main thread --------" << '\n';

    // // this execute one thread one time and close the thread before the next thread created    
    // std::vector<std::thread> threadvec;
    // for (int i=0; i <10; i++) {
    //     threadvec.push_back(std::thread(lambda, i));
    //     threadvec[i].join();
    // }

    // // this execute 10 threads and 
    // std::vector<std::thread> threadvec2;
    // for (int i=0; i <10; i++) {
    //     threadvec2.push_back(std::thread(lambda, i));
    // }
    // for (int i=0; i <10; i++) {
    //     threadvec2[i].join();
    // }
        
    // // this execute 10 threads by using jthread it join by its destrcutor c++20 
    // std::vector<std::jthread> jthreadvec2;
    // for (int i=0; i <10; i++) {
    //     jthreadvec2.push_back(std::jthread(lambda, i));
    // }

    //mutex
    // if  i run this code many times the threads do not finish it will give me 999 or 997 so we use mutex 
    std::vector<std::thread> threadvec3;
    for (int i=0; i <10000; i++) {
        threadvec3.push_back(std::thread(shared_val_increment));
    }
    for (int i=0; i <10000; i++) {
        threadvec3[i].join();
    }
    std::cout << "shared value : " << shared_val << '\n';
    return 0;
}