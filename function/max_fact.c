#include<stdio.h>
int max(int,int,int);
int main()
{
	int x,y,z;
	scanf("%d%d%d",&x,&y,&z);
	printf("your max number is --%d\n",max(x,y,z));
	return 0;
}
int max(int a,int b,int c)
{
	return (a>b)?(a>c)?a:c:(b>c)?b:c;
}
