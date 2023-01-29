#include<stdio.h>
#include<string.h>
int main()
{
	char a[10]={"Nain"};
	char b[10]={"hello"};
	char merg[20];
	int i,j;
	for( i=0;i!='\0';i++)
		merg[i]=a[i];
	for(j=0 ;j!='\0';i++,j++)
		merg[i]=b[j];
	merg[i]='\0';
	puts(merg);
	return 0;
}
