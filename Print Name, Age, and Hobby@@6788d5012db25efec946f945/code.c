#include <stdio.h>

int main() {
    char name[100];
    char hobby[100];
    int age;

    // Read age
    scanf("%d", &age);
    // Read name and hobby
    scanf("%s", name);  // No need for & before name
    scanf("%s", hobby); // No need for & before hobby

    // Print the results
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Hobby: %s\n", hobby);

    return 0;
}