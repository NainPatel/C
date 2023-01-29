#include<stdio.h>
#define N 4
int main()
{
    int j,a[N];
    for(int i=0;i<N;i++)
        scanf("%d",&a[i]);   
    for(int i=0;i<N-1;i++)
    {
        for(j=1;j<N;j++)
        if(i%j==0)
            printf("\n%d\n",a[i]);
    }
}