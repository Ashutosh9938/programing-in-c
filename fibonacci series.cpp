//fibonacci series
#include <stdio.h>

int main() {
 int i,n,a,b,c;
 a=0;
 b=1;
c = a+ b;
 printf("enter value of n :");
 scanf("%d",&n);
 printf("%d , %d ,",a,b);
 for(i=0;i<=n;i++)
 {
     printf("%d,",c);
     a=b;
     b=c;
     c=a+b;
 }

    return 0;
}
