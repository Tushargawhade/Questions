#include<iostream>
using namespace std;
int fun(int num , int k){
    int c=0;
    while(num>0){
        if(num%10 == k){
            c++;
        }
        num = num/10;
    }
    return c;
}
int main(){
    int num = 1332422523;
    int k = 2;
    cout<<fun(num , k);
    return 0;
}