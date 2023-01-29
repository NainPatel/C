#include<stdio.h>
int main()
{
	char *s[3]={"nain","nain1","nain2"};
	for(int i=0;i<3;i++)
		printf("%s\n",s+i);
	return 0;
}
