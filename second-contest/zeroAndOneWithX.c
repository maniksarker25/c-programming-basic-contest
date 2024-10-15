#include <stdio.h>
#include <math.h>

int main()
{
    int n, x;
    scanf("%d", &n);
    int numArr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &numArr[i]);
    }
    scanf("%d", &x);

    if (numArr[x -1] == 0)
    {
        numArr[x -1] = 1;
    }
    else
    {
        numArr[x -1] = 0;
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", numArr[i]);
    }
    return 0;
}