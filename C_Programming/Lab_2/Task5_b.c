#include <stdio.h>

//Task 5b
int main() {

int num,n;
float a;
printf("Input your range:"); 
scanf("%d", &num);
for(n=1;n<=num;n++)
{ 
  printf("\nEnter your number");
  scanf("%f",&a);
printf("Entered number is: %.2f \n",a);
}
return 0;
}