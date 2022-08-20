#include <stdio.h>
int main(){
int r,n,i,j;
printf("Please enter your number :\n");
scanf("%d %d",&n,&r);
for(i=1;i<=n;i++){
    printf("\n");
    for (j=1;j<=r;j++){
        if(i==1||i==n||j==1||j==r){
            printf("%d",j);}
            else{
                printf(" ");
            }
    }
}
return 0;
}
