#include <stdio.h>
int main() 
{
    int a ;
    char b[100];
    char c[200];
    scanf("%d",&a) ;
    scanf("%s",&b) ;
    scanf("%s",&c) ;
    printf("Name: %s\n",b);
    printf("Age: %d\n",a);
    printf("Hobby: %s",c);

     return 0;
}