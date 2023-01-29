/*2. Write a program to split the elements of an array into even
and odd array using pointers.*/
#include<stdio.h>
int main()
{
	int a[6]={1,0,2,3,4,5};
	/*int odd[5]={0};
	int even[5]={0};
	int *x=a,*y=odd,*z=even;*/
	int odd=0,even=0;
	for(int i=0;i<6;i++)
		if(*(a+i)%2==0)
			even++;
		else
			odd++;
	int o[odd];
	int e[even];
	for(int i=0;i<6;i++)
		if(*(a+i)%2==0)
			*(e+i)=*(a+i);
		else
			*(o+i)=*(a+i);
	printf("enen:");
	for(int i=0;i<even;i++)
		printf("%d ",*(e+i));
	printf("odd:");
	for(int i=0;i<odd;i++)
		printf("%d ",*(o+i));
	return 0;
}
