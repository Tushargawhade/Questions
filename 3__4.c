#include<stdio.h>
int abc(int a){
    printf("%d ",a);
    if(a){
        abc(a-1);
    }
    printf("%d ",a);
}
int main(){
    abc(3);
}