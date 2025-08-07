#include<stdio.h>
void fun(void);
int main(){
    fun();
    fun();
    fun();
}
void fun(void){
    // auto a=5;
    static int a=5;
    printf("%d ",a+=2);
}