#include <iostream>

int LinearSearch(int element, int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            return i;
        }
    }
    std::cout << "Item doesn't exists in the array. Return: ";
    return 0;
}


