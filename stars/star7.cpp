#include <stdio.h>

int main(){
	int max;
	scanf("%d", &max);
	for (int i=0; i<max-1; i++){
		for(int j=0; j < max-1-i;j++){
			printf(" ");
		}
		for(int s=0; s<=i*2; s++){
			printf("*");
		}
		printf("\n");
	}
	for(int w=0; w<max; w++){
		for(int s=0; s<w; s++){
			printf(" ");
		}
		for(int j=0; j<max*2-1-w*2; j++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
