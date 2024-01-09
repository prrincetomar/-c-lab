#include <stdio.h>
#include <string.h>

void main()
{
    char s1[100], s2[100];

    printf("string s1:");
    gets(s1);

    printf("string s2:");
    gets(s2);

    strcat(s1, s2);
    puts(s1);
}