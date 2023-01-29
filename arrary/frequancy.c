#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int temp,count=1,i,a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(i=0;i<n-1;i++)
    {
        count=1;
        for(int j=i+1;j<n;j++)
        {
            if (a[i] == a[j])
            {
                count++;
                if(a[i]!=a[j+1])
                    break;
            }
        }
        if(a[i] != a[count] || count==1)
            printf("%d is feq %d\n",a[i],count);
    }
    //for(i=0;i<n;i++)
       // printf("%d feq is %d\n", a[i], count);
    return 0;
}