#include<stdio.h>
 //task 14
int main()
{
  
    int i,j,rows,columns,a[i][j],Sum;
    printf("Enter your matrix's rows range");
    scanf("%d",&i);
    printf("Enter your matrix's columns range");
    scanf("%d",&j);
       printf("Enter the Matrix Row and Column value \n");
    for(rows = 0; rows < i; rows++){
        for(columns = 0; columns < j; columns++){
            scanf("%d", &a[rows][columns]);
        }
    }
    
    for(rows = 0; rows < i; rows++)
    {
        Sum = 0;
        for(columns=0;columns<j;columns++)
        {
            Sum = Sum + a[rows][columns];
        }
        printf("Sum of the row%d :%d \n",rows+1,Sum);
    }
    
    return 0;
}