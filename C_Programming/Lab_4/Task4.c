#include <stdio.h>

//Task 4

int main()
{ 
  int number[10], readingloop;
  int check_loop;
for(readingloop=0; readingloop<10; readingloop++){
  printf("Enter your number:\n");
  scanf("%d",&number[readingloop]);
}
for(check_loop=0;check_loop<10;check_loop++){
  if(number[check_loop]%2==0){
    printf(" First even number is %d ",number[check_loop]);
break;  }
  
}
  return 0;
}