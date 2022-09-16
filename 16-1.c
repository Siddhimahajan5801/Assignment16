#include <stdio.h>

int main(){ 
    int a[3][3];
    int b[3][3];
    int sum[3][3];
    int i,j;

    printf("Enter the elements of matrix a\n ");
    for (i=0; i<3 ; i++){
        for (j=0; j<3; j++){
            printf("a%d%d : ",i+1, j+1);
            scanf("%d",&a[i][j]);  }
    }

    printf("Enter the elements of matrix b\n");
    for (i=0; i<3 ; i++){
        for (j=0; j<3; j++){
            printf("b%d%d : ",i+1, j+1);
            scanf("%d",&b[i][j]); }
    }

    for (i=0; i<3; i++){
            for (j=0; j<3; j++){
                sum[i][j]=a[i][j]+b[i][j];
            }
      }

         printf("The sum of matrices is: \n");
        for (i=0; i<3; i++){
            for (j=0; j<3; j++){
               printf("%d  ",sum[i][j]);    

               if (j==2)
                   printf("\n");
            }
     
        }
    
return 0; 
}

         
        
