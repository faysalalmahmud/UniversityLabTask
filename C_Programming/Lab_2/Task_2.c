#include <stdio.h>
//Task 2
int main() {

int num,n,a;
printf("Input your range:"); 
scanf("%d",&num);
for(n=1;n<=num;n++)
{ 
  printf("\nEnter your number");
  scanf("%d",&a);
printf("Entered number is: %d \n",a);
}
return 0;
}