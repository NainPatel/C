#include<stdio.h>
int main()
{
    int i,j,k;
    char c;
    while(EOF)
    {
        c=getchar();
        if(c==' ')
            j++;
        if(c=='\t')
            i++;
        if(c=='\n')
            k++;
    }
    printf("space=%d\ntab=%d\nnew line=%d\n",j,i,k);
    return 0;
}