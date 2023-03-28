#include<stdio.h>
int smallest(int [], int);
int main()
{
    int arr[100], size, res;
    printf("\nEnter the size of an array: ");
    scanf("%d", &size);

    res = smallest(arr, size);
    printf("\nThe smallest element in an array is: %d", res);

    printf("\n\n");
    return 0;
}

int smallest(int b[], int N)
{
    int i, min;
    printf("\nEnter %d elements in an array: ", N);
    for (i = 0; i <= N-1; i++)
        scanf("%d", &b[i]);

    min = b[0];
    for (i = 0; i <= N-1; i++)
    {
        if (min > b[i])
            min = b[i];
    }    
    return min;    
}