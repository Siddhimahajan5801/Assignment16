#include <stdio.h>
int main(){ 
    int a[3][3];
    int i,j,rows=0,columns=0;

    printf("Enter the elements of matrix a\n ");
    for (i=0; i<3 ; i++){
        for (j=0; j<3; j++){
            printf("a[%d][%d] : ",i+1, j+1);
            scanf("%d",&a[i][j]); 
         }
    }  

    for (i=0; i<3 ; i++){
        for (j=0; j<3; j++){
            rows=rows+a[i][j];
        }
        printf("The sum of elements of row%d : %d \n",i+1, rows);
        rows=0;
      }

      printf("\n");

      for (j=0; j<3 ; j++){
        for (i=0; i<3; i++){
            columns=columns+a[i][j];
        }
        printf("The sum of elements of column%d : %d \n",j+1, columns);
        columns=0;
      }
  
return 0; 
}