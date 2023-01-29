#include<stdio.h>
int main()
{
	int a[3][3]={1,0,0,0,1,0,0,0,1};
	int (*p)[3]=a;
	int b[3][3]={1,1,1,1,1,1,1,1,1};
	int (*q)[3]=b;
	int c[3][3]={0};
	int (*r)[3]=c;
	for(int i=0;i<3;i++)
		for(int j=0;j<3;j++)
			for(int k=0;k<3;k++)
				*(*(r+i)+j) += *(*(p+i)+k) * *(*(q+k)+j);
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
			printf("%d ",*(*(r+i)+j));
		printf("\n");
	}
	return 0;
}
