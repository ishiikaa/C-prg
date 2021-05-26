#include <stdio.h>

int main()
{
    int len=0, i;
    char name[20];
    char name2[20];

    printf("Enter original string uwu:");
    scanf("%s", name);
  
  
    printf("Enter the copied string uwu:");
    scanf("%s", name2);

    for( i = 0 ;name[i]!='\0' ; i++)
    {
        name[i] = name2[i];
    
    }
    name2[i] != '\0';
    

    printf (" Copied String is: %s", name2);
}