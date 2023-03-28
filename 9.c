#include<stdio.h>

int main()
{
    int a[] = {10, 26, 39, 42, 95};
    int b[] = {16, 37, 68, 79, 100};
    int c[10], k = 0, i = 0, j = 0;

    for (k = 0; k <= 9; k++)
    {
        if (i >= 5)
        {
            while (k < 10)
            {
                c[k] = b[j];
                k++;
                j++;
            }
            if (k == 10)
                break;
        }

        if (j >= 5)
        {
            while (k < 10)
            {
                c[k] = a[i];
                i++;
                k++;
            }
            if (k == 10)
                break;
        }

        else if (a[i] < b[j])
        {
            c[k] = a[i];
            i++;
        }

        else
        {
            c[k] = b[j];
            j++;
        }
    }

    printf("\nThe merged sorted array is: \n\n");
    for (k = 0; k <= 9; k++)
        printf("%d\t", c[k]);

    printf("\n\n");
    return 0;
}