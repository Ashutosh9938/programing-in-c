//  sorting element in array 
#include <stdio.h>

int main() {
 int a[100],i,n,j,b[100],temp;
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
 for(i=0;i<n-1;i++)
 {
     for(j=i+1;j<n;j++)
     {
         if (a[i]>b[j]){
         a[i]=temp;
		 temp=b[i];
		 b[i]=a[i];	
		 }
 }
 printf("arrray");
for(i=0;i<0;i++){
	print("%d",a[i]);
}
    return 0;
}
