#include <stdio.h>

//Task8

int main()
{
   int rows,i,j,k;
printf("Enter your rows value");
scanf("%d",&rows);
for(i=0;i<rows;i++){
  for(j=1;j<=rows-i;j++){
    printf(" ");}
  for(k=rows-i;k<=rows;k++){
    printf("%d",k);}
  
  printf("\n");
}
  
  return 0;
}