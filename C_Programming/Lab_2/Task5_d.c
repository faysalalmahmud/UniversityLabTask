#include <stdio.h>

//Task5_d

int main()
{
  float substraction,n1,n2;
 
    printf("Enter your two fractional numbers");
    scanf("%f%f",&n1,&n2);
    if(n2>n1){
      substraction=n2-n1;
  }
  printf("%.2f", substraction);
  return 0;
}