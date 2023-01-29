//addition,subtraction, multiplication and division
#include<stdio.h>
int add(float ,float);
int sub(float,float);
int mul(float,float);
float div(float,float);
int main()
{
	float a,b;
	scanf("%d%d",&a,&b);
	printf("addition: %d\n",add(a,b));
	printf("Subtraction: %d\n",sub(a,b));
	printf("multiplication: %d\n",mul(a,b));
	printf("division: %f\n",div(a,b));
}
int add(float a, float b)
{
	return a+b;
}
int sub(float a,float b)
{
	return a-b;
}
int mul(float a,float b)
{
	return a*b;
}
float div(float a,float b)
{
	return a/b;
}
