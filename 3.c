#include<stdio.h>
void sort(int [], int);
int main()
{
    int arr[100], size;
    printf("\nEnter the size of an array: ");
    scanf("%d", &size);

    sort(arr, size); 
    
    printf("\n\n");
    return 0;
}

void sort(int b[], int N)
{
    int i, j, temp;
    printf("\nEnter %d elements of an array: ", N);
    for (i = 0; i <= N-1; i++)
        scanf("%d", &b[i]);

    printf("\nThe elements before sorting: \t");
    for (int i = 0; i <= N-1; i++)
        printf("%d\t", b[i]);    

    for (i = 0; i <= N-2; i++)
    {
        for (j = i+1; j <= N-1; j++)
        {
            if (b[i] > b[j])
            {
                temp = b[i];
                b[i] = b[j];
                b[j] = temp;
            }
        }
    }   
    printf("\n\nThe elements after sorting: \t");
    for (int i = 0; i <= N-1; i++)
        printf("%d\t", b[i]); 
}