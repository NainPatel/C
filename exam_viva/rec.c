#include <stdio.h>
#include <string.h>

int main()
{
    char str[100]="nain";
    int len, i, j, count;
    printf("Enter a string: ");
    //scanf("%s", str);
    len = strlen(str);
    for (i = 0; i < len; i++)
    {
        count = 1;
        for (j = i + 1; j < len; j++)
        {
            if (str[i] == str[j])
            {
                count++;
                str[j] = '\0';
            }
        }
        if (str[i] != '\0')
            printf("Frequency of %c = %d\n", str[i], count);
    }
    return 0;
}

