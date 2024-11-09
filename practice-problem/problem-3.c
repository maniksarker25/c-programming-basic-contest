/*

Given a number N and an array A of N numbers. Print the maximum value in this array.

Note: Solve this problem using recursion.

Input
First line contains a number N (1 ≤ N ≤ 103) number of elements.

Second line contains N numbers ( - 109 ≤ Ai ≤ 109).

Output
Print the maximum value in this array.
 */

#include <stdio.h>

int max_num(int arr[], int n, int max)
{
    if (n < 0)
    {
        return max;
    }

    if (arr[n] > max)
    {
        max = arr[n];
    }

    max_num(arr, n - 1, max);
}

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int maxNum = max_num(arr, n - 1, arr[n - 1]);

    printf("%d", maxNum);

    return 0;
}