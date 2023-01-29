#include<stdio.h>
#include<string.h>
int main()
{
	char a[100];
	scanf("%[^\n]s",a);
	for(int i=0;i<strlen(a);i++)
		if((a[i] >= 'a' && a[i] <= 'z') || (a[i] >= 'A' && a[i]<='Z'))
			printf("%c",a[i]);
	return 0;
}
