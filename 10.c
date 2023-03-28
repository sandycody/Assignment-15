#include<stdio.h>
void frequencyCount(int [], int);
int main()
{
    int arr[100], size;
    printf("\nEnter the size of an array: ");
    scanf("%d", &size);

    frequencyCount(arr, size);

    printf("\n\n");
    return 0; 
}

void frequencyCount(int b[], int N)
{
    int freq[100] = {0}, i;
    printf("\nEnter %d elements of an array: ", N);
    for (i = 0; i <= N-1; i++)
    {    
        scanf("%d", &b[i]);
        freq[b[i]]++;
    }

    for (i = 0; i <= 99; i++)
    {
        if (freq[i] != 0)
            printf("\n\nThe frequency of %d is: %d\n", i, freq[i]);  
    }    
}