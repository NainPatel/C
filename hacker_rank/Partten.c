/*
5   5 5 5 5 5 5 5   5
5 4   4 4 4 4 4   4 5
5 4 3   3 3 3   3 4 5
5 4 3 2   2   2 3 4 5
thsi is a loop too (5 4 3 2) 1 (2 3 4 5)
5 4 3 2   2   2 3 4 5
5 4 3   3 3 3   3 4 5
5 4   4 4 4 4 4   4 5
5   5 5 5 5 5 5 5   5
*/
/*
first row loop if input 5 then loop will run for 8 times (line=line*2-1)
for()
*/
#include <stdio.h>
int main()
{
  int num;
  printf("Enter your number:");
  scanf("%d", &num);
  for (int row = 0; row < num; row++)
  {
    for (int i = num; i <= row; i--)
      printf("%d", i);
//    for (int j = num; j >= num * 2 - 1; j--)
    //  printf("%d", row);
  printf("\n");
  }
  return 0;
}