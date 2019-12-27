#include <stdio.h>
#include <stdlib.h>
int main(int argc,char *argv[]){
    double a[100];
    int i =1;
    int j = 0;
    int c= 0;
    double temp;
    for(i=1;i<argc;i++,j++){
        a[j]=atof(argv[i]);
    }
    for(c=0;c<argc-2;c++){
     if(a[c]<a[c+1]) {
temp=a[c];
a[c]=a[c+1];
a[c+1]=temp;}
}
printf("The min is：%g\n",temp);
return 0;
}                                                