/*9. For the names and distances jumped by athletes in a long-jump competition, using a structure
to hold a name and distance (same structure as used in exercise 8), write a program to read the
data and print a list of names and distance jumped in order of merit (best jumper first).*/
#include<stdio.h>
#define n 3
typedef struct athletes
{
	char name[20];
	int distance;
}ath;
void sort(ath a[])
{
	for(int i=0;i<n-1;i++)
		for(int j=i+1;j<n;j++)
			if(a[i].distance<a[j].distance)
			{
				ath temp;
				temp.distance= a[i].distance;
				a[i].distance=a[j].distance;
				a[j].distance=temp.distance;
			}
}
int main()
{
	ath a[n];
	for(int i=0;i<n;i++)
	{
		scanf("%s",a[i].name);
		scanf("%d",&a[i].distance);
	}
	sort(a);
	for(int i=0;i<n;i++)
		printf("name:%s\n dis:%d\n",a[i].name,a[i].distance);
	return 0;
}
