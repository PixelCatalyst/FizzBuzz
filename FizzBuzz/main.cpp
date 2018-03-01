#include <iostream>
#include <string>

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

    std::string output;
    for (int i = min; i <= max; ++i)
    {
        if (i % 3 == 0)
            output += "Fizz";
        if (i % 5 == 0)
            output += "Buzz";
        if (i % 7 == 0)
            output += "Bizz";
        if (i % 11 == 0)
            output += "Fuzz";

        if (output.empty())
            std::cout << i;
        else
        {
            std::cout << output;
            output.clear();
        }
        std::cout << std::endl;
    }
    system("pause");

    return 0;
}