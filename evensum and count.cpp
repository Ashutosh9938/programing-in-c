//evensum and count
#include <stdio.h>

int main() {
 int i,n1,n2,esum=0,count=0;
 printf("enter value");
 scanf("%d %d",&n1,&n2);
 for(i=n1;i<=n2;i++){
 if(i%2==0)
 {
     esum=n1+n2;
     printf("the sum = %d\n",esum);
 }
 else{
     count++;
     printf("count=%d\n",count);
 }
 }
    return 0;
}
