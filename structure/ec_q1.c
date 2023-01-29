/*1. Write a program to add two given complex numbers. The complex number is a structure
variable with real and imaginary fields. Also modify the program such that addition of two
complex numbers will be carried out by passing it to a function named ‘add*/
#include<stdio.h>
typedef struct comp
{
	int real;
	int img;
}comp;
void print(comp *p)
{
	for(int i=0;i<2;i++)
		printf("%d + %di\n",(p+i)->real,(p+i)->img);
}
comp add(comp n[],comp ans)
{
	ans.real=n->real+(n+1)->real;
	ans.img=n->img+(n+1)->img;
	return ans;
}
int main()
{
	comp n[2];
	for(int i=0;i<2;i++)
	{
		printf("real:");
		scanf("%d",&n[i].real);
		printf("img:");
		scanf("%d",&n[i].img);
	}
	print(n);
	comp ans=add(n,ans);
	printf("%d + %di\n",ans.real,ans.img);
	return 0;
}
