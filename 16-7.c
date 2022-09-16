#include <stdio.h>
int main(){ 
    int a[3][3];
    int i,j;

    printf("Enter the elements of matrix a\n ");
    for (i=0; i<3 ; i++){
        for (j=0; j<3; j++){
            printf("a[%d][%d] : ",i+1, j+1);
            scanf("%d",&a[i][j]); 
         }
    } 
    
    printf("\nThe lower triangular of a given matrix : \n");
    for (i=0; i<3 ; i++){
        for (j=0; j<3; j++){
            if (j<=i)
            printf("%d ", a[i][j]);

            else printf("  ");
        }
        printf("\n");
    }

return 0; 
}