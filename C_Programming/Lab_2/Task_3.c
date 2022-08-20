#include <stdio.h>

//Task_3

int main()
{
  int n,sum=0,number,i;
  float average;
  printf("Enter your range number");
  scanf("%d",&n);
  for(i=1;i<=n;i++){
    printf("Enter your number");
    scanf("%d",&number);
    sum=sum+number;
    
  }
  average=(float)sum/n;
  printf("Sum=%d\nAverage=%f",sum,average);
  return 0;
}