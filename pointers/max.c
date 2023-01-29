//W.A.P that will find maximum number from the given 1-D array b using the concept of function returning pointer.
#include<stdio.h>
void hmm(int *a,int *max)
{
	*max=*a;
	for(int j=1;j<5;j++)
		if(*a+j>*max)
			*max=*a+j;
}
int main()
{
	int a[5]={1,2,3,4,5};
	int max;
	hmm(a,&max);
	printf("%d",max);
	return 0;
}

