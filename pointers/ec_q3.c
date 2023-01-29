/*
 * 3. Write a program to find maximum and minimum number from
element of an array using pointer.
*/
#include<stdio.h>
int* min_max(int *p)
{
	static int a[2];
	for(int i=0;i<5;i++)
		if(a[0]<*(p+i))
			*(a+0)=*(p+i);
		else
			*(a+1)=*(p+i);
	return a;
}
int main()
{
	int a[5]={1,2,3,4,5};
	int *p;
	p=min_max(a);
	printf("max:%d\n",*p);
	printf("min:%d",*(p+1));
	return 0;
}
