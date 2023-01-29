#include<stdio.h>
#include<stdlib.h>
typedef struct nain
{
	int age;
	char *name;
}nain;
int main()
{
	nain arr[2];
	arr[0].name = malloc(5*sizeof(char));
	arr[1].name = malloc(5*sizeof(char));
	for(int i=0;i<2;i++)
		scanf("%s",arr[i].name);
	for(int i=0;i<2;i++)
		printf("%s\n",arr[i].name);
	return 0;
}
