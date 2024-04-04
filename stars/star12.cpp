#include <stdio.h>

int main(){
    int max;
    scanf("%d", &max);
    for(int i = 0;i < 2*max-1; i++){
        for(int j = 0; j<max-1-i; j++){
            printf(" ");
        }
		if(i <max){
			for(int s = 0; s<i+1; s++){
            	printf("*");
		}
        
        }
        for(int a = 0; a<i+1-max; a++){
        	printf(" ");
		}
		if(i >= max){
			for(int w = 0; w < max-(i-max+1); w++){
				printf("*");
			}
		}
		printf("\n");
    }
    return 0;
}
