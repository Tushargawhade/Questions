#include<iostream>
using namespace std;
int main(){   


    // <<-----Factorial of a given number----->>
    int i=5;
    int num =i;
    int val = i;

    for(i;i>1;i--){
        val = val*(i-1);
    }

    cout<<"The factorial of "<<num<<" is :"<<val;

    // <<-----Fibonacci series of a given number----->>
    int i=0;
    int n;
    cout<<"enter number :";
    cin>>n;
    int a;
    int b=0;
    int c=1;

    cout<<b<<" "<<c<<" ";

    while(i<=n){
        a = b;
        b = c;
        c = a+b;
        cout<<c<<" ";
        i++;
    }
       









    return 0;
}