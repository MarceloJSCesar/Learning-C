#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char name[16];
    char nickname[16];
    char buffer[33];

    printf("Enter your name: ");
    scanf("%s",name);
    printf("Enter your nickname: ");
    scanf("%s",nickname);

    strcpy(buffer,name);
    strcat(buffer,nickname);

    puts(buffer);

    return 0;
}