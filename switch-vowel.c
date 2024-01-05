#include <stdio.h>

void main () 
{ char  m;

printf("m");
scanf("%c",&m);

switch(m)
{

case 'a': case 'e': case 'i': case 'o': case 'u': case 'A': case 'E': case 'I': case 'O': case 'U':
printf("vowel");
 break;

 default : printf("consonants "); break;
 
}     
}