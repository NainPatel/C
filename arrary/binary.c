#include<stdio.h>
int search(int a[],int n,int key)
{
	int mid=n/2;
		if(a[mid]<key)
			search(a,mid+1,key);
		if(a[mid]>key)
			search(a,mid-1,key);
		else if(a[mid]==key)
			return mid;
}
int main()
{
	int a[7]={1,2,3,4,5,6,7},n=7;
	int key;
	scanf("%d",&key);
	int i=search(a,n,key);
	printf("a[%d]=%d",i,a[i]);
	return 0;
}
