#ifndef CLOCK_H
#define CLOCK_H

#include "DigiNumber.h"

namespace digi
{

using namespace white;

class Clock
{
  public:
    Clock()  {}
    ~Clock() {}

    void Print()
    {
        Update();
        for (int n = 0; n < N; ++n)
        {
            std::cout
                << num[c->tm_hour/10][n]
                << num[c->tm_hour%10][n]

                << num[10][n]

                << num[c->tm_min/10][n]
                << num[c->tm_min%10][n]

                << num[10][n]

                << num[c->tm_sec/10][n]
                << num[c->tm_sec%10][n]
            << std::endl;
        }
    }

  private:
    void Update()
    {
        t = std::time(NULL);
        c = std::localtime(&t);
    }

  private:
    std::time_t t;
    std::tm* c;
};

}

#endif // CLOCK_H
