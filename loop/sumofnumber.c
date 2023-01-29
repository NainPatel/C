#include<stdio.h>
int main()
{
	int x,sum=0,number,onenumber,agent;
	printf("Enter your number:");
	scanf("%d",&number);
	for(1){
		onenumber=number%10;
		sum=sum+onenumber;
		number=number/10;
		if(number==0)
			break;
	}

	printf("%d\n",sum);
	return 0;
}
