#include <stdio.h>

//Task2

int main()
{
   int a,b,i,j;
printf("Enter your line value");
scanf("%d",&a);
printf("Enter your range value");
scanf("%d",&b);
for(i=1;i<=a;i++){
  for(j=1;j<=b;j++){
    printf("%d",j);
  }
  printf("\n");
}
  
  return 0;
}