#include <iostream>
#include <math.h>


int JumpSearch(int array[], int element, int len)
{
    int step = sqrt(len);
    int previous = 0;

    while (array[std::min(step, len) - 1] < element)
    {
        previous = step;
        step += sqrt(len);

        if (previous >= len)
        {
            std::cout << "Item doesn't exists in the array. Return: ";
            return 0;
        }
    }

    while (array[previous] < element)
    {
        previous++;
        if (previous == std::min(step, len))
        {
           std::cout << "Item doesn't exists in the array. Return: ";
            return 0; 
        }
    }

    if (array[previous] == element)
    {
        return previous;
    }
    return 0;
}
