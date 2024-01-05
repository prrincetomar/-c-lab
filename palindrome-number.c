#include <stdio.h>

void main()
 
{
int s=0,n,t,r;

printf("n");
scanf("%d",&n);

t=n;
while(n>0)
{
r=n%10;
s=s*10+r;
n=n/10;
}

if(t==s)
{printf("palindrome number");}

else 
{printf("not palindrome number");}

}

































