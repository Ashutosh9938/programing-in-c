// input element in array and add
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
     printf("%d,\n",a[i]);
 }
 int sum=0;
 for(i=1;i<n;i++)
 {
     if(a[i]%2==0);
     {
         sum=sum+a[i];
     }
 }
 printf("sum:%d/n",sum);
    return 0;
}
