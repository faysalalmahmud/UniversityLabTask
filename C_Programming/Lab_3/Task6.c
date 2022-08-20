#include <stdio.h>

//Task6

int main()
{
   int a,i,j;
printf("Enter your range value");
scanf("%d",&a);
for(i=1;i<=a;i++){
  for(j=1;j<=i;j++){
    printf("%d",j);
  }
  printf("\n");
}
  
  return 0;
}