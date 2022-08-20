#include <stdio.h>

//Task 3

int main()
{
  float r;
  float Circumference,Area;
  printf("To calculate circumference and area of a circle.\nPlease enter radius value:");
  scanf("%f",&r);
  Circumference=2*3.1416*r;
  Area=3.1416*r*r;
  printf("Circumference:%f\nArea:%f",Circumference,Area);
  return 0;
}