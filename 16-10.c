#include <stdio.h>
int main(){ 
    int r,c,i,j,index=-1;
    int maxcount=0;

  printf("Enter the number of rows and columns : ");
  scanf("%d %d", &r, &c);

   int a[r][c];
    int ones[r];

  printf("Enter the elements of matrix a\n ");
    for (i=0; i<r ; i++){
        for (j=0; j<c; j++){
            printf("a[%d][%d] : ",i+1, j+1);
            scanf("%d",&a[i][j]); 
         }
    } 

     for (i=0; i<r ; i++){
        int count=0;
        for (j=0; j<c; j++){
            if (a[i][j]==1)
            count++;
        }
        if (count>maxcount)
        {
            maxcount=count;
            index=i;
        }
     }

     printf("The row with maximum no.s of 1's is : Row%d ",index+1);

return 0; 
}