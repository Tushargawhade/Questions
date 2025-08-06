#include<iostream>
using namespace std;
class parent1{
    public:
    ~parent1(){
        cout<<"parent1's destructor"<<endl;
    }
};

class parent2{
    public:
    ~parent2(){
        cout<<"parent2's destructor"<<endl;
    }
};

class child: public parent1 , public parent2{
    public:
    ~child(){
        cout<<"child destructor"<<endl;
    }
};

int main(){
    child obj;
    return 0;
}