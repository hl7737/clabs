#include <stdio.h>
int strrindex(char s[],char t[]);
{
    int i,j,m,num;
    num=-1;
    for (i=0;s[i]!='\0';i++){
    for (j=i;m=0;t[m]!='\0' && s[j]==t[m];j++;m++)
    if(m>0 && t[m]=='\0')
    num=i;
    }
    return num;
}