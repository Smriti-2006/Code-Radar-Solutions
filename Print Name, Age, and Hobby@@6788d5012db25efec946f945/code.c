#include <stdio.h>
int main() {
    char name[20], hobby[20];
    int age;
    scanf("%d",&age);
    scanf("%s",&name);
    scanf("%s",&hobby);
    printf("Name: %s\n",name);
    printf("Age: %d\n",age);
    printf("Name: %s\n",hobby);

    return 0;
}