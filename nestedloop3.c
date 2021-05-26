#include <stdio.h>
#include <conio.h>
void main()
{
    char i; char j;
    for(i='A'; i<='Z';i++)
    {
        printf("\n");
        for(j='A' ; j<i; j++)
        {
            printf("%c", j);
        }
    }
}