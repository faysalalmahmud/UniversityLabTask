#include <stdio.h>
int main()
{
            int j,k,i,a;

    printf("Enter your no.\n");
    scanf("%d",&a);
    for(j=1;j<=a;j++){
    printf("\n");
        for(k=1;k<=(a-j);k++){
        printf(" ");

        }
        for(i=1;i<=((2*j)-1);i++){
        printf("%d",i);

        }


    }
        for(j=a-1;j>=1;j--){
    printf("\n");
        for(k=1;k<=a-j;k++){
        printf(" ");

        }
        for(i=1;i<=2*j-1;i++){
        printf("%d",i);
        }

    }

    return 0;
}
