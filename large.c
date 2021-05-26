#include <stdio.h>

int main(){
    int arr[5] = {10,20,30,40,50};
    int large = arr[0];
    for ( int i = 1 ; i < 5 ; i++)
    {
       if (arr[i] > large)
       {
           large = arr[i];
       }
    }
        printf("The largest array is : \n %d", large );
    return 0;
    
}