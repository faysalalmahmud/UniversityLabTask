#include <stdio.h>

//Task5

int main()
{
   int a,i,j;
printf("Enter your line value");
scanf("%d",&a);
for(i=1;i<=a;i++){
  for(j=1;j<=i;j++){
    printf("*");
  }
  printf("\n");
}
  
  return 0;
}