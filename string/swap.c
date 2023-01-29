#include<stdio.h>
int main()
{
	int n;
	scanf("%d ",&n);
	char a[n],temp;
	scnaf("%[^\n]s",a);
	int j;
	n-=1;
	if(n%2==0)
		j=n/2;
	else
		j=n/2-1;
	for(int i=0;i<j;i++)
	{
		temp=a[n-i];
		a[n-i]=a[i];
		a[i]=temp;
	}
	printf("%s",&a);
	return 0;
}
