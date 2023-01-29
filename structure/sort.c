#include<stdio.h>
void print(int *p)
{
	for(int i=0;i<4;i++)
		printf("%d ",*(p+i));
}
void sort(int *p)
{
	for(int i=0;i<3;i++)
		for(int j=0;j<4;j++)
			if((*(p+i))<(*(p+j)))
			{
				int temp=*(p+i);
				*(p+i)=*(p+j);
				*(p+j)=temp;
			}
}
int main()
{
	int a[4]={2,1,4,3};
	sort(a);
	print(a);
	return 0;
}
