#include<stdio.h>
void scan(int a[], int t,int b[])
{
    for(int i=0;i<t;i++)
    {
        scanf("%d",&a[i]);
        b[i]=-1;
    }
}
int main()
{
    int t;
    scanf("%d",&t);
    int a[t],b[t];
    scan(a,t,b);
    int count;
    for(int i=0;i<t;i++)
    {
        count=1;
        if(b[i]!=0)
        {
            if (a[i]==a[i+1])
            {
                count++;
                b[i]+=1;
            }
        }
        printf("%d:%d ",a[i],count);
    }
}
