//Task12
#include<stdio.h>
int main()
{
  int a,i,j,k;
printf("Enter your number");
scanf("%d",&a);
for(i=0;i<=a;i++)
{
   for(k=a;k>i;k--){
     printf(" ");}
   for(j=0; j<i; j++){
     printf("s ");}
 printf("\n");
}
for(i=1;i<a;i++){
   for(k=0;k<i;k++){
      printf(" ");}
   for(j=a;j>i;j--){
      printf("s ");}
   printf("\n");
}
return 0;
}
