#include <stdio.h>
int main() {
    char name[20];
    char hobby[20];
    int age;
    scanf("%d",&age);
    scanf("%s",&name);
    scanf("%s",&hobby);
    printf("Name: %s\n",name);
    printf("Age: %d\n",age);
    printf("Hobby: %s",hobby);

    return 0;
}