#include <stdio.h>

int main(){
	int lmao[10], sum;
	for (int i = 0; i < 10; i++){
		printf("\nEnter element at index %i : ", i);
		scanf(" %i", &lmao[i]);
	}	
	for (int i = 0; i < 10; i++){
       sum += lmao[i];
    }
    printf("\nResult is : %i", sum);
	return 0;
}