/*

You will be given a 2D matrix of N * M size. You will also be given X numbers. For each of the Number you have to print how many times the Number have appeared in the matrix.

Input Format

First line will contain N and M the number of row and column respectively and X,the number of integers we are going to search.
Then the 2D matrix will be given.
Then X lines will contain X integer Numbers.


 */

#include <stdio.h>

int freq[1005];
int main()
{
    int n, m, x;
    scanf("%d %d %d", &n, &m, &x); 
    int arr[n][m];

    // take 2d array
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    // array for counting numbers
    int x_arr[x];
    for (int i = 0; i < x; i++)
    {
        scanf("%d", &x_arr[i]);
    }

    // update frequency array
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            freq[arr[i][j]]++;
        }
    }

    for (int i = 0; i < x; i++)
    {
        printf("%d\n", freq[x_arr[i]]);
    }

    return 0;
}