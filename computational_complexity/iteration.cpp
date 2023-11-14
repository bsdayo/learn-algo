#include <iostream>
#include <sstream>

#include "print.h"

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

std::string nested_for_loop(int n)
{
    std::ostringstream result;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            result << '(' << i << ',' << j << ") ";
        }
        result << '\n';
    }

    return result.str();
}

int main()
{
    PRINT_RESULT(for_loop(5));
    PRINT_RESULT(while_loop(5));
    PRINT_RESULT(nested_for_loop(5));
    return 0;
}
