#include <stdio.h>

//Task6

int main()
{
 int a,b;
  printf("Please enter two numbers:");
  scanf("%d%d",&a,&b);
  if(a>b){
    printf("First is greater");
  }
  else if(a<b){
    printf("Second is greater");
  }
  else
      printf("the numbers are equal");
  return 0;
}