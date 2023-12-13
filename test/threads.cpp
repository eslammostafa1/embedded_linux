#include <iostream>
#include <thread>

void test(int x){
    std::cout << " my test thread " << '\n';
    std::cout << " passed argument : " << x << '\n';
}

int main() {
    std::thread thread1(&test, 22);

    // allow this thread (main) to wait the ather thread (thread1)
    thread1.join();
    
    std::cout << "----- my main thread --------" << '\n';
    
    return 0;
}