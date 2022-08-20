#include<stdio.h>
 
int main()
{
    int a[5],i,min,max;
    
    for(i=0; i<5; i++){
      printf("Enter your number in array : ");
      scanf("%d",&a[i]);
    }
 
    min=max=a[0];
   int location1=0;
   int location2=0;
    for(i=1; i<5; i++){
       if(min>a[i]){
          min=a[i];
          location1=location1+i;
          }   
       
       }
       
    for (i=1;i<5;i++){
    if(max<a[i]){
       max=a[i];
       location2=location2+i;
        }      
       
    }
  
   printf("Smallest number %d was found at %d",min, location1);
   printf("\nLargest number %d was found at %d",max, location2);
   
    return 0;
}