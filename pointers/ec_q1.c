/*1. Write a program to merge the two array of same size into
sorted order using pointers.*/
#include<stdio.h>
int main()
{
	int a[4]={1,2,3,4};
	int b[4]={8,7,6,5};
	int c[8];
	int i,j;
	for(i=0;i<4;i++)
		*(c+i)=*(a+i);
	for(j=0;j<4;j++,i++)
		*(c+i)=*(b+j);
	for(i=0;i<7;i++)
		for(j=i+1;j<8;j++)
			if(*(c+i)>*(c+j))
			{
				int temp=*(c+i);
				*(c+i)=*(c+j);
				*(c+j)=temp;
			}
	for(j=0;j<8;j++)
		printf("%d ",*(c+j));
	return 0;
}
