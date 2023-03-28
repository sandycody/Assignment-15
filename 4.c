#include<stdio.h>
#include<string.h>
void arrayRotation(int [], int);
int main()
{
    int arr[100], size;
    printf("\nEnter the size of an array: ");
    scanf("%d", &size);

    arrayRotation(arr, size);

    printf("\n\n");
    return 0;
}

void arrayRotation(int b[], int N)
{
    int i, j, n, temp;
    char d[50];
    printf("\nEnter %d elements of an array: ", N);
    for (i = 0; i <= N - 1; i++)
        scanf("%d", &b[i]);

    printf("\nEnter the direction in which we have to rotate: ");
    scanf("%s", d);
    printf("\nEnter the number of positions we have to rotate: ");
    scanf("%d", &n);
    for (j = 0; j <= n - 1; j++)
    {
        if (strcmp(d, "left") == 0)
        {
            temp = b[0];
            for (i = 0; i <= N-2; i++)
                b[i] = b[i+1];
            
            b[N-1] = temp;
        }

        if (strcmp(d, "right") == 0)
        {
            temp = b[N - 1];
            for (i = N - 1; i >= 1; i--)
               b[i] = b[i - 1];
            
            b[0] = temp;
        }

    }
    printf("\nThe array after rotation of %d elements in %s direction: \t", n, d);
    for (i = 0; i <= N - 1; i++)
        printf("%d\t", b[i]);
}