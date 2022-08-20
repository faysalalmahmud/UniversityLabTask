#include <stdio.h>

//Task 7

int main()
{
  int i,a;
  printf("Enter your number");
  scanf("%d",&a);
  if(a%2==0 && a>10){
    printf("An even number greater than 10");
  }
  if(a%2==0 && a<10){
    printf("An even number not greater than 10");
  }
  if(a%2!=0 && a>0){
    printf("An odd number is greater than 10");
  }
  if(a%2!=0 && a<10){
    printf("An odd number less than 10");
  }
  return 0;
}