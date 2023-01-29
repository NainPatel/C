#include<stdio.h>
int max(int,int,int);
int fact(int);
int main()
{
	int x,y,z;
	scanf("%d%d%d",&x,&y,&z);
	printf("your max number is --%d\n",max(x,y,z));
	printf("the fact of your max number is :%d",fact(max(x,y,z)));
	return 0;
}
int max(int a,int b,int c)
{
	return (a>b)?(a>c)?a:c:(b>c)?b:c;
}
int fact(int a)
{
	int multi=1;
	for(int i=a;i>1;i--)
		multi*=i;
	return multi;
}
