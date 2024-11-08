/*

Problem Statement

You will be given a matrix of size N * M. You need to tell if it is Jadu Matrix or not.

Note: A Jadu Matrix is a square matrix, where the values of primary diagonal and secondary diagonal are 1. Rest of the cell will contain only 0.

Input Format

First line will contain N, the row and M, the column of the matrix.
Then the N * M sized matrix will be given.
Constraints

1 <= N, M <= 100
0 <= Values <= 100
Output Format

Ouput "YES" if the matrix is Jadu Matrix, otherwise output "NO" without the quotation marks.



 */

#include <stdio.h>

int main()
{

    int n, m;
    scanf("%d %d", &n, &m);
    int arr[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    if (n != m)
    {
        printf("NO\n");
        return 0;
    }

    int isJadu = 1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i == j || (i + j) == n - 1)
            {
                if (arr[i][j] != 1)
                {
                    isJadu = 0;
                }
            }
            else
            {
                if (arr[i][j] != 0)
                {
                    isJadu = 0;
                }
            }
        }
    }

    if (isJadu == 1)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}