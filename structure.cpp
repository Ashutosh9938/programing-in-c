// Online C compiler to run C program online
#include <stdio.h>
#include<string.h>
#include <stdlib.h>
struct libary{
    char name [50],author[50];
    float price;
};
int main() {
    struct libary a[100];
    int i;
    FILE *fp;
    fp=fopen("libary.exe","r");
        if(fp==NULL)
        {
            printf("cannot open file");
            return 0;
            exit(0);
        }
    for (i=0;i<=200;i++)
    {
        printf("enter name of book");
        gets(a[i].name);
        printf("enter author of book");
        gets(a[i].author);
        printf("enter price of book");
        scanf("%f",&a[i].price);
    }
    rewind(fp);
    printf("the information of book is");
    for(i=0;i<200;i++){
        fread(&a[i],sizeof(a[i]),1,fp);
    if(a[i].price>350){
        printf("name =%s\n author=%s price=%f",a[i].name,a[i].author,a[i].price);
    }
    }
    return 0;
}
