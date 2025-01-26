#include <stdio.h>
int main() {
    char name[20];
    char hobby[20];
    int age;
    scanf("%d",&age);
    scanf("%c",&name);
    scanf("%c",&hobby);
    printf("Name: %c\n",name);
    printf("Age: %d\n",age);
    printf("Hobby: %c",hobby);

    return 0;
}