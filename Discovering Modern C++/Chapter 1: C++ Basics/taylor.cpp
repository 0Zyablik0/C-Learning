#include <iostream>

int main()
{
    double x0 = 1;
    int max_power = 10;
    double coefficient = 1;
    double pow_x = 1;
    double result = 0;
    for (int pow = 0; pow < max_power; pow++)
    {
        result += pow_x * coefficient;
        coefficient /= (pow + 1);
        pow_x *= x0;
    }

    std::cout << "Result: " << result << std::endl;
}