#include <stdio.h>

//Task_10

int main()
{ int a;
printf("Enter your marks");
scanf("%d",&a);
if(a>=90){
  printf("Grade A");
}
if(a>=80 && a<=89){
  printf("Grade B");
}
if(a>=70 && a<=79){
  printf("Grade C");
}
if(a>=60 && a<=69){
  printf("Grade D");
}
if(a>=50 && a<=59){
  printf("Grade E");
}
if(a<50){
  printf("Grade F");
}
  return 0;
}