#include  <stdio.h>
int main()
{
    unsigned int a=1;
    unsigned int b=1;
    printf ("\n");
    while (a=b)
    {
           a=a*2;
           b<<1;
    if (a!=b)
    printf("unsigned int的最大值:%u\n",b);
    }
    return 0;
}