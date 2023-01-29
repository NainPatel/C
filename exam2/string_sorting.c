#include<stdio.h>
#include<string.h>
int main()
{
	char a[][3]={"B","C","A"};
	int temp;
	for(int i=0;i<3;i++)
		for(int j=i+1;i<3;j++)
			if(strcmp(a[i][j],a[i][j+1])>0)
			{
				temp=a[i][j];
				a[i][j]=a[i][j+1];
				a[i][j+1]=temp;
			}
	for(int i=0;i<3;i++)
		printf("%s\n",a[i]);
	return 0;
}
