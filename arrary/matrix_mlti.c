/*we will take colums to colums for calculation
because its easy that way.
*/
#include <stdio.h>
#define N 100
int main()
{
    int i, j, k;
    int h=3, l=3, m=3, n=3;
    do
    {
        printf("enter the dimention for matrix a:");
        scanf("%d %d", &h, &l);
        printf("enter the im for b:");
        scanf("%d %d", &m, &n);
    } while (l != m);
    int a[h][l];
    int b[m][n];
    int multi[h][m];
    for (i = 0; i < h; i++)
    {
        for (j = 0; j < l; j++)
        {
            printf("\n'A'[%d,%d]=", i + 1, j + 1);
            scanf("%d", &a[i][j]);
            multi[i][j]=0;
        }
    }
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("\n'B'[%d,%d]=", i + 1, j + 1);
            scanf("%d", &b[i][j]);
            multi[i][j]=0;
        }
    }
    for (k = 0; k < h; k++)
    {
        for (i = 0; i < n; i++)
        {
            int sum=0;
            for (j = 0; j < m; j++)
            {
                sum+= a[k][j] * b[j][i];
            }
            multi[k][i]=sum;
        }
    }
    for (i = 0; i < h; i++)
    {
        for (j = 0; j < n; j++)
            printf("%4d", multi[i][j]);

        printf("\n");
    }
    return 0;
}