//sum of odd & even
#include <stdio.h>

int main() {
int i,esum=0,osum=0;
for(i=1;i<=5;i++)
{
	if(i%2==0){
	    esum=esum+i;
             }
             else{
                 osum=osum+i;
             }
             printf("even sum=%d\n",esum);
             printf("odd sum=%d\n",osum);
}
return 0;
}
