#include <iostream>
#include <vector>
#include <stack>

/*
    i                 j
    4, 9, 7, 6, 2, 3, 8
    l        ^        r
*/

void QuickSort(int arr[], int n)
{
    std::stack<int> stk;

    int i, j;

    int left = 0, right = n - 1;

    int pivot;

    stk.push(left);
    stk.push(right);

    do
    {
        right = stk.top();
        stk.pop();
        left = stk.top();
        stk.pop();

        i = left;
        j = right;

        pivot = arr[(i + j) / 2];

        do
        {
            while (arr[i] < pivot)
            {
                // пока i-ый элемент меньше центрального
                i++;
            }
            while (arr[j] > pivot)
            {
                // пока j-ый элемент больше центрального
                j--;
            }

            if (i <= j)
            {
                std::swap(arr[i], arr[j]);
                i++, j--;
            }
        } while (i <= j);

        if (left < j)
        {
            /*
                      j     i
                4, 9, 7, 6, 2, 3, 8
                l        ^        r
            */
            stk.push(left);
            stk.push(j);
        }
        if (i < right)
        {
            /*
                      j     i
                4, 9, 7, 6, 2, 3, 8
                l        ^        r
            */
            stk.push(i);
            stk.push(right);
        }
    } while (!stk.empty());
}
