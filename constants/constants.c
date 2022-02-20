#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAX_STRING_LENGTH 100
#define PROGRAM_NAME "=== Constants ==="

int main()
{   
    char full_name[MAX_STRING_LENGTH];

    puts(PROGRAM_NAME);
    puts("Enter your full name: ");
    fgets(full_name,MAX_STRING_LENGTH,stdin);
    puts("== = ==");
    printf("Name: %s Length: %d",full_name,strlen(full_name));


    return 0;
}