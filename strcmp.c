#include <stdio.h>
#include <string.h>

void main ()
{int l;
char s1[10], s2[10];

printf("string s1  ");
gets(s1);
printf("string s2  ");
gets(s2);
l = strcmp(s1,s2);
if(l==0)
printf(" string are same ");
else 
printf("string are not same ");



}