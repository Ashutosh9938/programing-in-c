// Online C compiler to run C program online
#include <stdio.h>
      void add(int *p2,int m){
          int sum=0,i;
          p2=&m;
          for(i=0;i<m;i++){
              sum=sum+*(p2+i);
          }
      }
      void display(int *p3,int f){
          int i;
      printf("elements are");
      for(i=0;i<f;i++){
          printf("%d",*(p3+i));
      }

int main() 
{
      int a[50],*p1,i,n;
      
      printf("enter no of elements");
      scanf("%d",&n);
      p1=&a[0];
      printf("enter %d elements",n);
      for(i=0;i<n;i++)
	  {
          scanf("%d",(p1+i));
      }
      add(a,n);
      display(a,n);
    return 0;
}

