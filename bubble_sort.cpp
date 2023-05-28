#include <iostream>
#include <vector>

void BubbleSort(std::vector<int>& arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr.at(j) > arr.at(j + 1))
            {
                int temp = arr.at(j);
                arr.at(j) = arr.at(j + 1);
                arr.at(j + 1) = temp;
            }
        }
    }
}