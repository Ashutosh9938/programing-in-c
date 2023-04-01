// input element in array and reverse
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
 printf("reversed:");
 for(i=n-1;i>=0;i--)
 {
     printf("%d",a[i]);
 }
    return 0;
}
