//even &odd count,sum
#include <stdio.h>

int main() {
 int i,n1,n2,esum=0,osum=0,ecount=0,ocount=0;
 printf("enter value");
 scanf("%d %d",&n1,&n2);
 for(i=n1;i<=n2;i++){
 if(i%2==0)
 {
     esum=n1+n2;
     printf("the sum = %d\n",esum);
     ecount++;
     printf("even count=%d\n",ecount);
 }
 else{
     osum=n1+n2;
     printf("the sum = %d\n",osum);
        ocount++;
     printf("odd count=%d\n",ocount);
 }
 
 }
    return 0;
}
