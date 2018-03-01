#include <iostream>

int main()
{
    int min = 0;
    std::cout << "min: ";
    std::cin >> min;
    int max = 0;
    std::cout << "max: ";
    std::cin >> max;
    if (min > max)
    {
        std::cout << "Min is bigger than max. Swapped min with max.";
        int temp = max;
        max = min;
        min = temp;
    }

    for (int i = min; i <= max; ++i)
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