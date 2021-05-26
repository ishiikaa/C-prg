#include <stdio.h>

int main()
{
    int len=0, i;
    char name[20];

    printf("Enter your Name:");
    scanf("%s", name);
    for( i = 0 ;name[i]!='\0' ; i++)
    {
        len++;
    }

    printf("Length is: %d", len);
}