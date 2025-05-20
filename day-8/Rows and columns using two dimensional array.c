#include <stdio.h>
int main()
{
    int rows,col,i,j;
    scanf("%d %d", &rows, &col);
    int a[rows][col];
    for (i=0; i<rows; i++)
    {
        for (j=0; j<col; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (i=0; i<rows; i++)
    {
        for (j=0; j<col; j++)
        {
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
    printf("%d",a[0][0]);
    return 0;
}
