#include <stdio.h>

int main(){
    int max;
    int c=0;
    scanf("%d" , &max);
    
    
    
    /*
    if(max >= 3){
    	for(int i=0; i<max; i++){
            for(int j=0; j<max; j++){
            	
				if((i+1)%3 == 2 && (j+1)%3 == 2){
					printf(" ");
				}else if((i-2)%9 >= 1 && (i-2)%9 <= 3 && (j-2)%9 >= 1 && (j-2)%9 <= 3){
					printf(" ");
				}else if((i-8)%27 >= 1 && (i-8)%27 <= 9 && (j-8)%27 >= 1 && (j-8)%27 <= 9){
					printf(" ");
				}else if((i-26)%81 >= 1 && (i-26)%81 <= 27 && (j-26)%81 >= 1 && (j-26)%81 <= 27){
					printf(" ");
				}else{
					printf("*");
				}
            }
            printf("\n");
        }
	}
	*/
	
	
	
	if(max >= 3){
    	for(int i=0; i<max; i++){
            for(int j=0; j<max; j++){
            	if((i+1)%3 == 2 && (j+1)%3 == 2){
					printf(" ");
					continue;
					c =1;
				}
            	for(int a=1; a<max; a *= 3){
            		if((i-3*a+1)%(a*9) >= 1 && (i-3*a+1)%(a*9) <= a*3 && (j-3*a+1)%(a*9) >= 1 && (j-3*a+1)%(a*9) <= a*3){
						printf(" ");
						c = 1;
						break;
					}
				}
				if(c==0){
					printf("*");
				}
				c = 0;
            }
            printf("\n");
        }
	}
    return 0;
}
