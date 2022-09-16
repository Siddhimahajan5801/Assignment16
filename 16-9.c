#include <stdio.h>
int main(){ 
    int r,c,i,j;
    int count=0;

  printf("Enter the number of rows and columns : ");
  scanf("%d %d", &r, &c);

   int a[r][c];
  printf("Enter the elements of matrix a\n ");
    for (i=0; i<r ; i++){
        for (j=0; j<c; j++){
            printf("a[%d][%d] : ",i+1, j+1);
            scanf("%d",&a[i][j]); 
         }
    } 

    for (i=0; i<r ; i++){
        for (j=0; j<c; j++){
            if (a[i][j]==0)
            count++;
        }
    }

    if (count> (r*c)/2)
    printf("It is a sparse matrix");

    else printf ("It is not a sparse matrix");
 
return 0; 
}