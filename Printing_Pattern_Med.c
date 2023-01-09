#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int n;
    scanf("%d", &n);
    // Complete the code to print the pattern.
    int i, j, k,l;
    i = j = k = l= 0;

    for (i = 0; i < 2 * n - 1; i++)
    {
        for (j = 0; j < 2 * n - 1; j++)
        {
            if (j < n && j <= l )
            {
                k = n - j;
                printf("%d ", k);
            }
            else if (j >= n && j >= 2 * n - 1 - l )
                {
                    printf("%d ", ++k);
                }    
            else
            {
                printf("%d ", k);
            }
        }
        if(i < n-1) l++;
        else
             l--;
        printf("\n");
    }

    return 0;
}
