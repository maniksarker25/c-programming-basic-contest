#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);

    int *arr = (int *)malloc(1 * sizeof(int));
    if (arr == NULL)
    {
        printf("Memory allocation failed\n");
    }

    int arr_len = 1;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);

        arr_len++; 

        // Reallocate memory 
        int *temp = realloc(arr, arr_len * sizeof(int));
        if (temp == NULL)
        {
            printf("Memory allocation failed\n");

        }
        arr = temp;
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    // Free the allocated memory
    free(arr);
    return 0;
}
