// addition of matrix
#include <stdio.h>

int main() {
   int a[10][10],b[10][20],c[10][20],m,n,i,j;
   printf("enter m and n matrix");
   scanf("%d%d",&m,&n);
   printf("enter for 1st elements");
   for(i=0;i<n;i++){
       for(j=0;j<m;j++){
           scanf("%d",&a[i][j]);
       }
   }
   printf("element are");
   for(i=0;i<n;i++){
       for(j=0;j<m;j++){
           printf("%d,",a[i][j]);
       }
}

   printf("enter for 2nd elements");
   for(i=0;i<n;i++){
       for(j=0;j<m;j++){
           scanf("%d",&b[i][j]);
       }
   }
   printf("element are");
   for(i=0;i<n;i++){
       for(j=0;j<m;j++){
           printf("%d,",b[i][j]);
       }
   }
   
   
   
   int sum=0;
    for(i=0;i<n;i++){
       for(j=0;j<m;j++){
   c[i][j]=a[i][j]+b[i][j];
       }
    }
   printf("The sum is");
   {
       for(i=0;i<n;i++){
       for(j=0;j<m;j++){
           printf("sum =%d",c[i][j]);
   }
       }
   }
    return 0;
}
