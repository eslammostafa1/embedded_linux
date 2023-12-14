#include <iostream>
#include <thread>

void test(int x){
    std::cout << " my test thread " << '\n';
    std::cout << " passed argument : " << x << '\n';
}

auto lambda=[](int x){
    std::cout << " my test thread with lambda ." << '\n';
    std::cout << " passed argument : " << x << '\n';
};

int main() {
    std::cout << "----- my main thread --------" << '\n';

    std::thread thread1(&test, 22);
    std::thread thread2(lambda, 33);

    // allow this thread (main) to wait the ather thread (thread1)
    thread1.join();
    thread2.join();

    
    return 0;
}