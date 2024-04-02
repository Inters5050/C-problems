#include <stdio.h>

int main(){
    int max;
    scanf("%d", &max); 
    for(int i=0;i < max; i++){
        for(int f=0; f < i; f++){
            printf(" ");
        }
        for(int g=0; g < max*2-1-i*2;g++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
