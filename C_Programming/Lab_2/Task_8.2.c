#include <stdio.h>

//Task_8.2

int main()
{ int a;
printf("Enter your number");
scanf("%d",&a);
if(a%2==0){
  if(a%5!=0){
  printf("Enterd number is a multiple of 2");
}
}
if(a%5==0){
  if(a%2!=0){
  printf("Enterd number is a multiple of 5\n");
}
}
  return 0;
}