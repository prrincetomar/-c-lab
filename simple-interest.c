#include <stdio.h>
 
void main()

{
    float si;
    int p, r, t;

    printf("value of p,r,t");
    scanf("%d%d%d", &p, &r, &t);

    si = (p * r * t) / 100.0;

    printf("%f", si);
}
