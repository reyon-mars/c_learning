#include <stdio.h>

int binary_search(int array[], int value, size_t length)
{
    int lower_bound = 0, upper_bound = length - 1;
    while (lower_bound <= upper_bound)
    {
        int midpoint = (upper_bound + lower_bound) / 2;

        if (array[midpoint] == value)
        {
            return 1;
        }
        else if (value < array[midpoint])
        {
            upper_bound = midpoint - 1;
        }
        else if (value > array[midpoint])
        {
            lower_bound = midpoint + 1;
        }
    }
    return 0;
}
int main()
{
    return 0;
}