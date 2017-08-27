#include "test.h"

int main()
{
    std::cout << "Hello World!" << std::endl;

    test t;

    t.set(10);

    std::cout << "Counter: " << t.get() << std::endl;
    return 0;
}
