#include <stdio.h>

int main(){
    int lmao[10];
   
    for (int i = 0 ; i < 10; i++){
        printf("\nEnter number : ", i);
        scanf(" %i", &lmao[i]);
    }
    for (int i = 9 ; i >= 0; i--){
      printf(" %i",lmao[i]); 
    }
    ;
    return 0;
}