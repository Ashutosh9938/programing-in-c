//find amstrong
#include <stdio.h>

int main() {
int  num ,sum=0,rem,a;
printf("enter a num");
scanf("%d",&num);
a=num;
while(num>0)
{
	rem=num%10;
	sum=sum+rem*rem*rem;
	num=num/10;
}
if(a==num)
{
    printf("khate");
}
else {
    printf("masala");
}
return 0;
}
