#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int n;
    scanf("%d", &n);
    // Complete the code to print the pattern.
    int row, column, col_pattern,row_pattern;
    row = column = col_pattern =  row_pattern = 0;

    for (row = 0; row < 2 * n - 1; row++)
    {
        for (column = 0; column < 2 * n - 1; column++)
        {
            if (column < n && column <= row_pattern )
            {
                col_pattern = n - column;
                printf("%d ", col_pattern);
            }
            else if (column >= n && column >= 2 * n - 1 - row_pattern )
                {
                printf("%d ", ++col_pattern);
                }    
            else
            {
                printf("%d ", col_pattern);
            }
        }
        if(row < n-1) row_pattern++;
        else
             row_pattern--;
        printf("\n");
    }

    return 0;
}
