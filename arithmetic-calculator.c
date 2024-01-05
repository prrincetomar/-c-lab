 #include <stdio.h>
 #include <conio.h>

void main()
{
  char ch;
  int a,b;
  
  
  printf("value of a and b");
  scanf("%d%d",&a,&b);
  
  getchar();

  printf("ch");
  scanf("%c",&ch);
   
                                                                                                             
switch (ch)
   {
       case'%': printf("%d",a%b); break;
       case'*': printf("%d",a*b); break;
       case'-': printf("%d",a-b); break;
       case'+': printf("%d",a+b); break;
       case'/': printf("%d",a/b); break;
   
   default: printf("another oprator "); break;
   } 



}
