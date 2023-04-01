// using dma in function
#include <stdio.h>
#include <stdlib.h>
void higest(int*a1,int x){
    int i;
    x=*a1;
    for(i=0;i<=x;i++){
        if(x<*(a1+i))
            x=*(a1+i);
    }
        
        printf("the higest element is %d", x);
    
}
void display(int *a2,int y)
{
    int i;
    for(i=0;i<=y;i++){
        printf("%d,",*(a2+i));
    }
}
int main() {
    int *a,i,n;
    printf("entere numbe of elements");
    scanf("%d",&n);
    a=(int*)malloc(n*sizeof(int));
    printf("enter %d elements",n);
    for(i=0;i<n;i++){
        scanf("%d",(a+i));
    }
    printf("the elements are");
    display(a,n);
    higest(a,n);

    return 0;
}
