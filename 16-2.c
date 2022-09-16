#include <stdio.h>
int main(){ 
    int a[3][3];
    int b[3][3];
    int multi[3][3];
    int i,j,k;

    printf("Enter the elements of matrix a\n ");
    for (i=0; i<3 ; i++){
        for (j=0; j<3; j++){
            printf("a[%d][%d] : ",i+1, j+1);
            scanf("%d",&a[i][j]);  }
    }

    printf("Enter the elements of matrix b\n");
    for (i=0; i<3 ; i++){
        for (j=0; j<3; j++){
            printf("b[%d][%d] : ",i+1, j+1);
            scanf("%d",&b[i][j]); }
    } 
    for (i=0; i<3 ; i++){
        for (j=0; j<3; j++){ 
            multi[i][j]=0;
           for(k=0; k<3; k++) {
               multi[i][j]=multi[i][j]+ a[i][k]*b[k][j]; 
            }
        }
    }
    
    printf("The product of two matrices is : \n");
    for (i=0; i<3 ; i++){
        for (j=0; j<3; j++){
            printf("%d ", multi[i][j]);
        }
        printf("\n");
    }

return 0; 
}