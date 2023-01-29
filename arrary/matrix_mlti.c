/*we will take colums to colums for calculation
because its easy that way.
*/
#include <stdio.h>
#define N 100
int main()
{
    int i, j, k, a[N][N] = {{2, 4, 3}, {3, 4, 5}, {5, 2, 5}};
    int b[N][N] = {{2, 1, 6}, {3, 6, 4}, {2, 5, 6}};
    int multi[N][N] = {0};
    int h=3, l=3, m=3, n=3;
    do
    {
        printf("enter the dimention for matrix a:");
        scanf("%d %d", &h, &l);
        printf("enter the im for b:");
        scanf("%d%d", &m, &n);
    } while (l != m);
    for (i = 0; i < h; i++)
    {
        for (j = 0; j < l; j++)
        {
            printf("\n'A'[%d,%d]=", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("\n'B'[%d,%d]=", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }
    for (k = 0; k < h; k++)
    {
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < m; j++)
            {
                multi[k][i] += a[k][j] * b[j][i];
            }
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