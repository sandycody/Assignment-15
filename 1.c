#include<stdio.h>

int greatest(int [], int);
int main()
{
    int arr[100], size, res;
    printf("\nEnter the size of an array: ");
    scanf("%d", &size);

    res = greatest(arr, size);
    printf("\nThe greatest element in an array is: %d", res);

    printf("\n\n");
    return 0;
}

int greatest(int b[], int N)
{
    int i, max;
    printf("\nEnter %d elements in an array: ", N);
    for (i = 0; i <= N-1; i++)
        scanf("%d", &b[i]);

    max = b[0];
    for (i = 0; i <= N-1; i++)
    {
        if (max < b[i])
            max = b[i];
    }    
    return max;    
}