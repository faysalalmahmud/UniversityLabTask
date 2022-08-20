#include <stdio.h>

//Task 7

int main()
{
  int number[5],loop,large_number=number[0];
  for(loop=0;loop<5;loop++){
    printf("Enter your number");
    scanf("%d",&number[loop]);
  }
  for(loop=1;loop<5;loop++){
    if(number[0]<number[loop]){
      large_number=number[loop];
    }
  }
  printf("\n%d",large_number);
  
  return 0;
}