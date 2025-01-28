#include <stdio.h>
int main() {
    int a;
    char c[10],b[20];
    // scanf("%s",&c);
    scanf("%[^\n]", c);
    scanf("%[^\n]", b);
    scanf("%d",&a);
    // scanf("%s",&b);
    printf("Name: %s\n",c);
    printf("Age: %s\n",a);
    printf("Hobby: %s\n",b);
    return 0;
}