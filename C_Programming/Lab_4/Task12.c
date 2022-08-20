#include <stdio.h>

//Task 12

int main()
{
  int number[10],i,j;
  for(i=0;i<10;i++){
    printf("Enter your number");
    scanf("%d",&number[i]);
  }
  for(j=9;j>=0;j--){
    printf("%d  ",number[j]);
  }
  return 0;
}