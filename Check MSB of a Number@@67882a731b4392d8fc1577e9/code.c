#include <stdio.h>
int main() {
    int a,c;
    scanf("%d",&a);
    c = a>>31;
    if(c&1==1){
        printf("Set");
    }
    else{
        printf("Not Set");
    }
    return 0;
}