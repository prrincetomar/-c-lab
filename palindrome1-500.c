#include <stdio.h>

void main()
{
    int i, r, t, s, p[500];

    // read the value of n to find number of palindrome number
    

    for (i = 1; i < 500; i++)
    {
        // here initiailization of s=0 is mandatory beacuse for every value of i. initial of of s must be 0
        s = 0;
        // store the value of i in the another variable to to calculate it further
        t = i;

        while (i > 0)
        {

            // take remainder of i
            r = i % 10;
            s = s * 10 + r;
            i = i / 10;
        }

        i = t;
        if (t == s)
            p[i] = s;
        else

            p[i] = 0;
    }

    for (i = 1; i < 500; i++)
    {
        if (p[i] == 0)
            continue;
        printf(" \n  %d ", p[i]);
    }
}