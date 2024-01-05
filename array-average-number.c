#include <stdio.h>

void main()
{int n,i=0,s=0,a[10],avg;
printf("n");
scanf("%d",&n);

while(i<n)
{printf("read a[i]");
scanf("%d",&a[i]);
i++;
}
i=0;
for(i=0;i<n;i++)
{s=s+a[i];

}
avg=(float)s/n;
 printf("%d",avg);

}                  
