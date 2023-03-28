#include<stdio.h>
void uniqueElements(int [], int);
int main()
{
    int arr[100], size;
    printf("\nEnter the size of an array: "); 
    scanf("%d", &size);

    uniqueElements(arr, size);

    printf("\n\n");
    return 0;
}

void uniqueElements(int b[], int N)
{
    int freq[100] = {0}, i;
    printf("\nEnter %d elements of an array: ", N);
    for (i = 0; i <= N-1; i++)
    {    
        scanf("%d", &b[i]);
        freq[b[i]]++;
    }

    printf("\nThe unique elements in an array are: \t");
    for (i = 0; i <= 99; i++)
    {
        if (freq[i] == 1)
            printf("%d\t", i);  
    }    
}