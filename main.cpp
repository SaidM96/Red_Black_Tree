#include <iostream>
#include <cmath>


int main()
{
    float a = 13.35;
    float b = 2.88;

    int fixeda = (int)roundf((1 << 8) * a);
    int fixedb = (int)roundf((1 << 8) * b);

    float result = fixeda + fixedb;
    result = ((float)result / (1 << 8));
    std::cout << result << std::endl;
    std::cout << a + b << std::endl;
}