// input element in array and add even and odd number
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
     printf("%d,",a[i]);
 }
 int sum=0,osum=0;
 for(i=1;i<n;i++)
 {
     if(a[i]%2==0)
     {
         sum=sum+a[i];
     }
     else
     {
     	osum=osum+a[i];
	 }
 }
 printf("sum:%d\n osum:%d",sum,osum);
    return 0;
}
