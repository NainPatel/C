#include<stdio.h>
int main()
{
	int a[5]={1,2,3,4,5};
	int b[5]={6,7,8,9,10};
	int c[10];
	int i=0,j=0,k=0,q=0;
	while(k<10)
	{
		while(q<5)
		{
			if(a[i]>b[j])
			{
				j++;	
				c[k]=a[i];
			}
			else
			{
				i++;
				c[k]=b[j];
			}
			q++;
		}
		k++;
	}
	for(i=0;i<10;i++)
		printf("%d ",c[i]);
}
