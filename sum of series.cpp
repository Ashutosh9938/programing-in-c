//sum of series
#include <stdio.h>

int main() {
int sum,i,n;
printf("enetr a number");
scanf("%d",&n);
for(i=0;i<=3;i++)
{
    sum=sum+i*i;
}
printf("sum is %d\n",sum);
return 0;
}
