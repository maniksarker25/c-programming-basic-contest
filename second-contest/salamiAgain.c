#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int salamiArr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &salamiArr[i]);
    }
    int maxSalami = 0;
    for (int i = 0; i < n; i++)
    {
        if (salamiArr[i] > maxSalami)
        {
            maxSalami = salamiArr[i];
        }
    }
    for(int j=0;j<n;j++){
        printf("%d ",maxSalami - salamiArr[j]);
    }
    return 0;
}