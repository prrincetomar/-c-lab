#include "stdio.h"
#include "conio.h"
#include "math.h"

void main()

{
    float area, s, k;
    int a, b, c;

    printf("a ");
    scanf("%d", &a);

    printf("b");
    scanf("%d", &b);

    printf("c");
    scanf("%d", &c);

    s = (a + b + c) / 2;

    k = (s * (s - a) * (s - b) * (s - c));

    area = sqrt(k);
    printf("%f", area);
}