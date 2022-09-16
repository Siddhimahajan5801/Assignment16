#include <stdio.h>
int main(){ 
    int a[3][3];
    int b[3][3];
    int i,j;

    printf("Enter the elements of matrix a\n ");
    for (i=0; i<3 ; i++){
        for (j=0; j<3; j++){
            printf("a[%d][%d] : ",i+1, j+1);
            scanf("%d",&a[i][j]); 
         }
    }

    for (i=0; i<3 ; i++){
        for (j=0; j<3; j++){
            b[i][j]=a[j][i];
        }
    }

    printf("The Transpose of matrix a :\n");
    for (i=0; i<3 ; i++){
        for (j=0; j<3; j++){
            printf("%d  ",b[i][j]);
    } 
    printf("\n");
    }
return 0; 
}