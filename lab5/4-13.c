#include <stdio.h>
#include <string.h>
{
void reverse(char s[])
    int k,l;
    reverse(s,0,strl(s));
}
    int m,j;
    j=l-(k+1);
if(k<j){
    m=s[k];
    s[k]=s[j];
    s[j]=m;
    reverse(s,++k,l);
    }
}