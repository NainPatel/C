#include<stdio.h>
int main()
{
	char *name[3]={"","",""};
	int i;	

	for(i=0;i<3;i++)
	{	
	//	printf("%d\n",i);
	//	printf("%d\n",(name+i));
		scanf("%s",(name+i));
	//	printf("#%c\n",*(name+i));
	//	printf("%d\n",i);
	}
	for(int i=0;i<3;i++)
	{
		printf("%s\n",name+i);
	}
	return 0;
}
