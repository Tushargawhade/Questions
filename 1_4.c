#include<stdio.h>
int main(){
    int i=1;
    while(++i <=12);
    {
        ++i;
        i--;
        printf("%d ",i);
    }
}