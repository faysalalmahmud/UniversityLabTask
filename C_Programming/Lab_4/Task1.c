#include <stdio.h>

//Task 1

int main()
{
  int loop,a[3],sum;
  for(loop=0;loop<3;loop++){
    printf("Enter your number");
    scanf("%d",&a[loop]);
  }
  sum=a[0]+a[1]+a[2];
  printf("%d,%d,%d,%d",sum,a[0],a[1],a[2]);
  return 0;
}