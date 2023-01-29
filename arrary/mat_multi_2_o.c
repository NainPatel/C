#include <stdio.h>
int main(){
  int i, j, k, sum = 0, row1, column1, row2, column2;
  int first[10][10], second[10][10], result[10][10];
  
  //Asking for input
  printf("Enter no. of rows and columns of first matrix: /n");
  scanf("%d %d", &row1, &column1);
  printf("Enter no. of rows and columns of second matrix: /n");
  scanf("%d %d", &row2, &column2);
  
  if (column1 != row2)
    printf("Error!! Multiplication is not possible.");
  else{
    printf("Enter elements of first matrix: \n");
    for(i = 0; i < row1; i++)
    for(j = 0; j < column1; j++)
    scanf("%d", &first[i][j]);
    
    printf("Enter elements of second matrix: \n");
    for (i = 0; i < row2; i++)
    for (j = 0; j < column2; j++)
    scanf("%d", &second[i][j]);
    
    //Calculating the multiplication
    for (i = 0; i < row1; i++)
    {
      for (j = 0; j < column2; j++)
      {
        for (k = 0; k < row2; k++)
        {
          sum = sum + first[i][k] * second[k][j];
        }
        result[i][j] = sum;
        sum = 0;
      }
    }
    
    //Displaying the result
    printf("Multiplication of two matrices are: \n");
    for (i = 0; i < row1; i++)
    {
      for (j = 0; j < column2; j++)
      printf("%d \t", result[i][j]);
      printf("\n");
    }
  }
  return 0;
}

