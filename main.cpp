#include <iostream>
#include <iomanip>
#include <thread>
#include <chrono>
#include <ctime>
#include <signal.h>

#include "Aterm.h"
#include "Clock.h"

using namespace aterm;

bool exe;
void trap(int signal){ exe = false; }

int main()
{
    digi::Clock clock;

    std::cerr << saveterm << hiddencur;

    exe = true;
    signal(SIGINT, &trap);
    
    std::ios::sync_with_stdio(false);

    std::cout << "A term ..." << std::endl;

    while(exe)
    {
        std::cerr << clearterm;
        
        clock.Print();
        
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }

    signal(SIGINT, SIG_DFL);
    std::cerr << restoreterm << showcur;

    return 0;
}
