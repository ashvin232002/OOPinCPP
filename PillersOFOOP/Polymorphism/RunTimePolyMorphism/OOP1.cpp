//Run Time PolyMorphism Conditions

//Rules for Method Overriding
/*  -The method of the Parent class and the child class must have the same name 
    -The method of the parent class and the method of the child class must have the same 
      parameters
    -It is Possible Through Inheritance only

*/
#include<bits/stdc++.h>
using namespace std;

class Animal{
    public :
    void speak(){
        cout<<"Speaking..."<<endl;
    }
};


class Dog: public Animal{
    public:
    void speak(){
        cout<<"Barking..."<<endl;
    }
};

int main(){
    Dog obj;
    obj.speak();//override the parent class speak
    return 0;

}

