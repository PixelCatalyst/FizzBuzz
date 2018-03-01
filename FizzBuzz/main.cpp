#include <iostream>

int main()
{
    for (int i = 1; i < 100; ++i)
    {
        bool threeDivisible = (i % 3 == 0);
        bool fiveDivisible = (i % 5 == 0);
        if (threeDivisible)
            std::cout << "Fizz";
        if (fiveDivisible)
            std::cout << "Buzz";
        if ((threeDivisible || fiveDivisible) == false)
            std::cout << i;
        std::cout << std::endl;
    }
    system("pause");

    return 0;
}