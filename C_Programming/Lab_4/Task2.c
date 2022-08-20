#include <stdio.h>

//Task 2

int main()
{ 
  int loop,a[10],number;
  for(loop=0;loop<10;loop++){
    printf("Enter your number");
    scanf("%d",&a[loop]);
  }
  printf("Enter your number between 0-9");
  scanf("%d",&number);
  printf("%d",a[number]);
  return 0;
}