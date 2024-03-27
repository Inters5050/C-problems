#include <stdio.h>

int main(){
    int max;
    scanf("%d", &max);
    for(int i=0; i < max; i++){
        for(int g=0; g < max-i-1; g++){
            printf(" ");
        }
        for(int h=0; h<=i; h++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
