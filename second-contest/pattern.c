#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int spaceCount = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    for (int j = n - 1; j >= 1; j--)
    {

        for (int s = 1; s <= spaceCount; s++)
        {
            printf(" ");
        }
        for (int k = 1; k <= j; k++)
        {
            printf("%d", k);
        }
        spaceCount += 1;
        printf("\n");
    }
    return 0;
}