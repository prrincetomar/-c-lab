#include <stdio.h>

void main()
{
   int i, j, len;
   char s1[10], s2[10],t ;

   printf("string s1:  ");
   gets(s1);

   i = 0;
  
   while (s1[i] != '\0')
   {  
        i++;
   }
   
   len = i;
   
   j=0;
   while (s1[j]<len /2)
   {    t= s1[j];
        s1[j]=s1[i];
        s1[i]=t;
        j++;
        i--;
   }

   puts(s1);
 }