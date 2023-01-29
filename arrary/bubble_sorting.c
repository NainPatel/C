#include<stdio.h>
#define N 5
int main()
{
    int temp,i=5,num,a[N]={3,4,5,2,1},j;
    int k,c,d;
    printf("enter the number:");
    //scanf("%d",&num);
    //for ( i = 0; i < num; i++)
   // {
   //     printf("a[%d]=",i);
    //   scanf("%d",&a[i]);
    //}
    c = i - 1, d =i-2;
    for (k = 0; k < 4; k++)
    {
        for (c, d; d != -1; d--, c--)
        {
            if (a[d] > a[c])
            {
                temp=a[d];
                a[d]=a[c];
                a[c]=temp;
           }
        }
    }
    for(i=0;i<num;i++)
        printf("%d",a[i]);
    return 0;
}