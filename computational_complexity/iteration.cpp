#include <iostream>

int for_loop(int n)
{
    int result = 0;
    for (int i = 1; i <= n; i++)
        result += i;
    return result;
}

int while_loop(int n)
{
    int result = 0;
    int i = 0;
    while (i <= n)
    {
        result += i;
        i++;
    }
    return result;
}

int main()
{
    std::cout << "for_loop: " << for_loop(5) << std::endl;
    std::cout << "while_loop: " << while_loop(5) << std::endl;
    return 0;
}