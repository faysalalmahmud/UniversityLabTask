    #include <stdio.h>
    int main()
    {
 
        int i, j, a, number[5];
        
        
        for (i = 0; i < 5; i++){
          printf("Enter the numbers \n");
          scanf("%d", &number[i]);
        }
            
 
        for (i = 0; i < 5; i++){
            for (j = i + 1; j < 5; j++){  
                if (number[i] < number[j]){
                 a = number[i];
                    number[i] = number[j];
                    number[j] = a;
                   }  
                 }
               }
        printf("The numbers from high to low\n");
        for (i = 0; i < 5; i++){
            printf("%d\t", number[i]);}
 
    }