#include <stdio.h>
int main() {
    char name[20], hobby[20];
    int age;
    scanf("%d",&age);
    scanf("%s",&name);
    scanf("%s",&hobby);
    printf("Name: %s",name);
    printf("Age: %d",age);
    printf("Name: %s",hobby);

    return 0;
}