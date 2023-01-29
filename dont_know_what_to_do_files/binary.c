/* this program is in progresss */
/* this program will take value form user and turn */ 
/* then into byniry */
/* Isnt this cool */
/* do this is free time ko */
/* Date 4-november-2022 */
#include<stdio.h>
#include<math.h>
int main()  
{  
    int num=13, bin = 0, rem = 0, place = 1;  
  
   // scanf("%d", &num);

    printf("\nBinary equivalent of %d is ", num);  
    while(num)  
    {  
        rem   = num % 2;  
        num   = num / 2;  
        bin   = bin + (rem * place);  
        place = place * 10;  
    }  
    printf("Enter a decimal number ");
    printf("%d\n", bin);
    return 0;  
}  
