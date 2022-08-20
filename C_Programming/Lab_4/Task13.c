#include <stdio.h>

//Task 13

int main()
{
  int matrix[5][5],i,j;
  for(i=0;i<5;i++){
    for(j=0;j<5;j++){
      printf("Enter your number");
      scanf("%d",&matrix [i][j]);
    }
  }
   for(i=0;i<5;i++){
    for(j=0;j<5;j++){
      printf("%d", matrix [i][j]);
    }
    printf("\n");
  }
  return 0;
}