#include <stdio.h>

void main ()
{
    char s1[100],s2[100];
    int i,j=0;

    printf("string s1: ");
    gets(s1);

    printf("string s2:");
    gets(s2);

    for( i = 0; s1[i] !='\0'; i++){
    }

    while (s2[j] != '\0'){
       s1[i]= s2[j];
        i++;
        j++;
    }

    s1[i]='\0';
    puts(s1);

}
