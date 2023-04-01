// largest element in array 
#include <stdio.h>

int main() {
 int a[100],i,n;
 printf("enter how many");
 scanf("%d",&n);
 printf("enter %d no",n);
 for(i=0;i<n;i++){
     scanf("%d",&a[i]);
 }
 printf("the elementes are");
 for(i=0;i<n;i++){
     printf("%d",a[i]);
 }
 int b=a[0];
 for(i=1;i<0;i++)
 {
     if(b<a[i]);
     {
         b=a[i];
     }
 }
 printf("large:%d",b);
    return 0;
}
