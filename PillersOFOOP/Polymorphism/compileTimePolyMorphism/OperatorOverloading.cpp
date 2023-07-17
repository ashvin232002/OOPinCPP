//operator Overloading in compileTime PolyMorphism

#include<bits/stdc++.h>
using namespace std;
class B{
    public:
    int a;
    int b;
    
    //overloading + operator
    void operator+ (B &obj){
        int value1  =  this->a;
        int value2 =  obj.a;
        cout<<"Output is "<<value2-value1<<endl;
    }

    //overloading () operator
    void operator() (){
        cout<<"Main Bracket hu "<<this->a<<endl;
    }
};



int main(){

    B  obj1,obj2;
    obj1.a  =  4;
    obj2.a  =  7;
    obj1+obj2;  //output is 3 operator overloaded working as a minus
    obj1();// ()(bracket) operator overloading


    return  0 ;
}