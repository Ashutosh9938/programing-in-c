//switch condition 
#include <stdio.h>

int main() {
int a,b,c,d;
printf("**menu** \n");
printf("choose any \n 1. Addition \n 2. substraction \n 3. multiplication\n");
printf("enter your choice");
scanf("%d",&c);
printf("enter two numbers");
scanf("%d %d",&a,&b);
switch (c)
{
	case 1:
	d=a+b;
	printf("sum =%d",d);
	break;
	case 2:
	d=a-b;
	printf("diff =%d",d);
	break;
	case 3:
	d=a*b;
	printf("mul =%d",d);
	break;

	defult:
		printf("no such condition");
	
}
return 0;
}
