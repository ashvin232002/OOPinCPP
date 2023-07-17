//Inheritance Ambiguity
//If sub class is inherited by more than One Parent class if they have same function name 
//then the Inheritance ambiguity would be created

#include<bits/stdc++.h>
using namespace std;


class A{
    public:
    void func(){
        cout<<" I am A"<<endl;
    }
};

class B{
    public:
    void func(){
        cout<<" I am B"<<endl;
    }
};

class C : public A,public B{
    


};

int main(){
    
    C obj;
    // obj.func();//Inheritance Ambiguity Error 
    
    obj.A::func();
    obj.B::func();
    return  0 ;

}