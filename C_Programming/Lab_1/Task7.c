#include <stdio.h>

//Task7

int main()
{
  int a,b,diff;
  printf("Please enter two numbers:");
  scanf("%d %d",&a,&b);
  if(a>b){
    diff=a-b;
   printf("result is %d",diff);
   }
  return 0;
}