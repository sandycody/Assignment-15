#include <stdio.h>
int count_duplicate(int [], int);
int main()
{
    int arr[100], size, res;
    printf("\nEnter the size of an array: ");
    scanf("%d", &size);

    res = count_duplicate(arr, size);
    printf("\nThe number of duplicate elements in an array is: %d", res);

    printf("\n\n");
    return 0;
}

int count_duplicate(int b[], int N)
{
    int i, j, count = 0;
    printf("\nEnter %d elements of an array: ", N);
    for (i = 0; i <= N-1; i++)
        scanf("%d", &b[i]);
    
    for (i = 0; i <= N-2; i++)
    {
        for (j = i+1; j <= N-1; j++)
        {
            if (b[i] == b[j])
                count++;
        }
    }
    return count;    
}