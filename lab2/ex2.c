#include <stdio.h>
int main()
{
    char count;
    while((count=getchar())!='\n')
        putchar(count);
    int num;
    if (num < 0)
        return;
    do {
        if (num &0*01== 1) 
        count++;  
    } while((num >>= 1) != 0);
    printf("the number is:%d\n",count, num);
    return 0; 
}