//no divided br 5
#include <stdio.h>

int main() {
int i,sum=0;
for(i=1;i<=500;i++)
{
	if(i%5==0){
	     printf("%d\n",i);
	    sum=sum+i;
	}
             
             printf("sum is%d\n",sum);
}
return 0;
}
