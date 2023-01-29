/*8.) A length, specified in meters and centimetres, is represented by two integers. For example, the length 3m 75cm is represented by 3 75. Using a structure to represent a length, write functions to compare, add, and subtract */
#include<stdio.h>
typedef struct lenght
{
	int m;
	int cm;
}len;
void print(len n1,len n2)
{
	printf("1 m:%d cm:%d\n",n1.m,n1.cm);
	printf("2 m:%d cm:%d\n",n2.m,n2.cm);
}
void com(len n1,len n2)
{
	if(n1.m>n2.m)
		printf("\n%d\n",n1.m);
	else
		printf("%d\n",n2.m);
}
len add(len n1,len n2)
{
	len ans;
	ans.m=n1.m+n2.m;
	ans.cm=n1.cm+n2.cm;
	return ans;
}

int main()
{
	len n1,n2,ans;
	scanf("%d %d",&n1.m,&n1.cm);
	scanf("%d %d",&n2.m,&n2.cm);
	ans=add(n1,n2);
	print(n1,n2);
	printf("ans m:%d cm:%d",ans.m,ans.cm);
	return 0;
}

