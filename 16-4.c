#include <stdio.h>
int main(){ 
  int a[3][3]; 
  int sum=0;
  int i,j; 

   printf("Enter the elements of matrix a\n ");
    for (i=0; i<3 ; i++){
        for (j=0; j<3; j++){
            printf("a[%d][%d] : ",i+1, j+1);
            scanf("%d",&a[i][j]); 
         }
    }  

    for (i=0; i<3 ; i++){
        for (j=2; j>=0; j--){
            if (i+j==2)
            sum=sum+a[i][j];
        }
    }

     printf("The sum of right diagonals of a matrix : %d ", sum);

return 0; 
}