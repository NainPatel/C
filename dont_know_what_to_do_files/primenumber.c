#include<stdio.h>
int main()
{
    int num,count;
    printf("numm");
    scanf("%d",&num);
    
   for ( count =0; count <= num; count++)
   {
        if(num % count==0)
        printf("%d",num);
   }
   if (1)
   {
        printf("not prime");
   }
   
    
   return 0; 
}