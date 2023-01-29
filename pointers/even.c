#include<stdio.h>
int* even(int *a,int *b)
{
	int j=0;
	int *c=b;
	for(int i=0;*(a+i)!=0;i++)
		if(*(a+i)%2==0)
		{
			*(c+j)=*(a+i);
			j++;
		}
	return c;
}
int main()
{
	int a[10]={1,2,3,4,34,6,7};
	int b[10]={0};
	int *c;
	c=even(a,b);
	for(int i=0;*(c+i)!=0;i++)
		printf("%d ",*(c+i));
	return 0;
}

