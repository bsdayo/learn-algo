#include <iostream>
#include "print.h"

int recur(int current)
{
    if (current == 1)
        return 1;

    // n - (n-1) - ... - 3 - 2 - 1
    return current + recur(current - 1);
}

int tail_recur(int current, int latest = 0)
{
    if (current == 1)
        return latest + 1;

    return tail_recur(current - 1, latest + current);
}

int main()
{
    PRINT_RESULT(recur(5));
    PRINT_RESULT(tail_recur(5));
}
