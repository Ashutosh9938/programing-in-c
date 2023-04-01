// input and display element using dynamic memory allocation
#include <stdio.h>
#include <stdlib.h>
int main() {
    int *a,i,n;
    printf("enter number of elements ");
    scanf("%d",&n);
    a=(int *)malloc(n * sizeof(int));
    //a=(int *)calloc(n,size of (int));
    printf("enter %d elements",n);
    for(i=0;i<n;i++){
        scanf("%d",(a+i));
    }
    printf("the elements are");
    for(i=0;i<=n;i++){
        printf("%d",*(a+i));
    }
    free(a);

    return 0;
}
