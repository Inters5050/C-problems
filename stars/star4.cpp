#include <stdio.h>

int main(){
    int max;
    scanf("%d", &max); 
    for(int i=0;i < max; i++){
        for(int g=0; g < i;g++){
            printf(" ");
        }
        for(int f=0; f < max-i; f++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
