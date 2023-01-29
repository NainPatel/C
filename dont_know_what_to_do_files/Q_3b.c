#include<stdio.h>
int main()
{
    int number,day,year,month;
    scanf("%d",&number);
    year=number/360;
    month= (number-(year*360))/30;
    day=number-(year*360)-(month*30);
    printf("year %d month %d day %d",year,month,day);
    return 0;
}