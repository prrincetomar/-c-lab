
#include <stdio.h>
#include <conio.h>

void main()

{
    int a,b,c,max,mid,min;



    printf("write the of a b c ");
    scanf("%d%d%d", &a, &b ,&c);

    if (a > b)

    {
        if (b > c)
        {max = a;
            mid = b;
                min = c;
                    } 

        else 
         if (a > c)
         {max = a;
             mid = c;
                min = b;
                    }
        else 
        {max = c;
            mid = a;
               min =b;
                   }}
        else
        if (b > c)
           
    {     if(a > c)
         {max = b;
              mid = a;
                 min = c;
                     }

        else
         {max = b;
             mid = c;
                min = a;
        }}
        else
           {max = c;
               mid = b;
                  min = a;
            } 

  printf("max%d\n\tmid%d\nmin%d\n",max,mid,min);  

}