#include <stdio.h>

void main()
{
char i='A';
while(i<='Z')
{
    char j='A';
    while(j<=i)
    {
        printf("%c",j);
        j++;
    }
    i++;
    printf("\n");
}

}

