#include<stdio.h>
int print(int,int);
int main()
{
	int x=15,y=50;
//	printf("%d  ",print(x,y));
	return 0;
}
int print(int a,int b)
{
	if(b==0)
		pritnf("%d ",print(a,b));
		return print(a,b-1);
