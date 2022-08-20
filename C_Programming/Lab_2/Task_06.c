#include <stdio.h>

//Task6

int main()
{ int i,a,n;
printf("Enter your range number");
scanf("%d",&n);
  for(i=1;i<=n;i++){
    printf("\nEnter your number");
    scanf("%d",&a);
    if(a%2==0){
    printf("Your number is even\n");}
    else{
      printf("Your number is odd\n");
      }
  }
  return 0;
}