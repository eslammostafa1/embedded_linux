#include <iostream>
#include <signal.h>
#include <unistd.h>
// Define the function to be called when ctrl-c (SIGINT) is sent to process
void signal_callback_handler(int signum) {
   std::cout << '\n' << "Caught signal " << signum << '\n';
   // Terminate program
   exit(signum);
}

int main() 
{ 
    int count = 0; 
    // register signal SIGSEGV and signal handler 
    signal(SIGSEGV, signal_callback_handler); 
   // Register signal and signal handler
    signal(SIGINT, signal_callback_handler);
    while (++count) { 
        std::cout << "Hello GeeksforGeeks..." << '\n'; 
        sleep(1);
        if (count == 10) 
            raise(SIGSEGV); 
    } 
    return 0; 
}
