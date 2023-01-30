#include<stdio.h>
int multi(int n,int n1)
{
    if(n1==0)
        return 0;
    else
        return (n+multi(n,n1-1));
}
int main()
{
    int n,n1;
    scanf("%d %d",&n,&n1);
    printf("%d\n",multi(n,n1));
    return 0;
}