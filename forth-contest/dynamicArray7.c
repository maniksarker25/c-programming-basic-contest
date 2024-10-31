#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    scanf("%d", &n);

    int *arr = (int *)malloc(1 * sizeof(int));

    int arr_len = 1;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        int *temp = arr;

        // reallocate memory for resizing array
        arr = (int *)realloc(arr, (arr_len + 1) * sizeof(int));

        if (arr == NULL)
        {
            arr = temp;
        }
    }

    printf("kdjfkdjfkd");

    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }

    // free the memory with deallocate
    free(arr);
    return 0;
}