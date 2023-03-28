#include <stdio.h>
int adj_duplicate(int [], int);
int main()
{
    int arr[100], size, res;
    printf("\nEnter the size of an array: ");
    scanf("%d", &size);

    res = adj_duplicate(arr, size);
    printf("\nThe adjacent duplicate elements in an array is: %d", res);

    printf("\n\n");
    return 0;
}

int adj_duplicate(int b[], int N)
{
    int i;
    printf("\nEnter %d elements of an array: ", N);
    for (i = 0; i <= N-1; i++)
        scanf("%d", &b[i]);
    
    for (i = 0; i <= N-1; i++)
    {
        if (b[i] == b[i+1])
            return b[i];
    }    
}