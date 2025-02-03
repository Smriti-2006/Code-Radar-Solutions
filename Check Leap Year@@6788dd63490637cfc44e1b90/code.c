#include <stdio.h>
int main()
 {
    int y ;
    scanf("%d",&y);
    if (y %4== 0){
        printf("Leap Year");
    }
    if (y %400== 0){
        printf("Leap Year");
    }
    if (y %100== 0){
        printf("Not aLeap Year");
    }
    return 0;
}