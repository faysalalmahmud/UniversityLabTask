#include <stdio.h>

//Task 8

int main()
{
  int number[5],loop,large_number=number[0], location=0;
  for(loop=0;loop<5;loop++){
    printf("Enter your number");
    scanf("%d",&number[loop]);
  }
  for(loop=1;loop<5;loop++){
    if(number[0]<number[loop]){
      large_number=number[loop];
      location=location+loop;
    }
  }
  printf("\nLargest number %d was found at location %d",large_number, location);
  
  return 0;
}