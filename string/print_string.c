#include<stdio.h>
int main()
{
    char i,a[100];
    gets(a);
    char b[100];
    for( i=0;a[i]!='\0';i++)
        b[i]=a[i];
    b[i]='\0';
    puts(b);
}