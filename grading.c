#include "stdio.h"
 
void main()


{
char grade;
int per,m1,m2,m3,m4,m5;

printf(" enter your marks ");
scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
 
 per=(m1+m2+m3+m4+m5)/5;


if (per >= 90)
 
 grade = 'A';

 else 

 if (per >= 85)

 grade= 'B';

 else 

 if (per >= 75)

 grade = 'C';

 else 

 grade = 'D';

 printf("%c",grade);
 
}
