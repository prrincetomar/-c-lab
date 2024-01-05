#include <stdio.h>
#include <math.h>
void main ()

{
  int t,n,s=0,c=0,r;

  printf("n");
  scanf("%d",&n);
  t=n;
  while (n>0)
  {
    c=c+1;
    n=n/10;
  }

   n=t;
   while(n>0)
   {
    r=n%10;
    s=s+pow(r,c);
    n=n/10;
   }
     if(t==s)
      printf("as");
     else 
     
      printf("nas");
   }


























