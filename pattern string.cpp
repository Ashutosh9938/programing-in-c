//pattern string
#include <stdio.h>
/*
N
EE
PPP
AAAA
LLLLL

int main() {
    int i,j;
    char a[]="NEPAL";
    for(i=0;i<6;i++){
        for(j=0;j<=i;j++)
        {
            printf("%c",a[i]);
        }
        printf("\n");
    }

    return 0;
}*/




/*
N
NE
NEP
NEPA
NEPAL
NEPAL

int main() {
    int i,j;
    char a[]="NEPAL";
    for(i=0;i<6;i++){
        for(j=0;j<=i;j++)
        {
            printf("%c",a[j]);
        }
        printf("\n");
    }

    return 0;
}*/





/*
r
ro
ron
rona
ronal
ronald
ronaldo

#include<string.h>
int main() {
    int i,j;
    char a[100];
    printf("enter string");
    gets(a);
    for(i=0;i<strlen(a);i++){
        for(j=0;j<=i;j++)
        {
            printf("%c",a[j]);
        }
        printf("\n");
    }

    return 0;
}
