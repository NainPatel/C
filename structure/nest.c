#include<stdio.h>
typedef struct n1
{
	int a[5];
}n1;
typedef struct last
{
	n1 s[5];
}last;
int main()
{
	last n2[3];
	scanf("%d",&n2[0].s[0].a[0]);
	printf("%d",n2[0].s[0].a[0]);
}
