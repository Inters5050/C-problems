#include <stdio.h>

int main(){
    int max;
    scanf("%d", &max);
    for(int i=0; i < max; i++){
        for(int h=0; h < max-i; h++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
