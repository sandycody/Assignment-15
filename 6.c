#include<stdio.h>
void display(int [], int);
int main()
{
    int arr[100], size;
    printf("\nEnter the size of an array: ");
    scanf("%d", &size);

    display(arr, size);

    printf("\n\n");
    return 0;
}

void display(int b[], int N)
{
    int i;
    printf("\nEnter %d elements in an array: ", N);
    for (i = 0; i <= N-1; i++)
        scanf("%d", &b[i]);

    printf("\nThe elements in reverse order are: \t");
    for (i = N-1; i >= 0; i--)
        printf("%d\t", b[i]);    
}