#include <stdio.h>

int main(){
	int max;
	scanf("%d", &max);
	for(int i=0; i<max-1;i++){
		for(int j=0; j<i+1;j++){
			printf("*");
		}
		for(int b=0; b<max*2-(i+1)*2; b++){
			printf(" ");
		}
		for(int a=0; a<i+1;a++){
			printf("*");
		}
		printf("\n");
	}
	for(int i=0; i<max;i++){
		for(int e=0; e<max-i; e++){
			printf("*");
		}
		for(int j=0; j<i*2;j++){
			printf(" ");
		}
		for(int d=0; d<max-i; d++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
