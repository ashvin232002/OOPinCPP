//Heirarchical Inheritance
// 1 class serve as a parent for the more than 1 class

#include<bits/stdc++.h>
using namespace std;

class A{
   public:
   void func1(){
    cout<<" I am Inside Function 1"<<endl;
   }
};

class B : public A{
   public:
   void func2(){
    cout<<" I am Inside Function 2"<<endl;
   }
};

class C: public A{
   public:
   void func3(){
    cout<<" I am Inside Function 3"<<endl;
   }

};
int main(){

    A object1;
    object1.func1();
    cout<<endl;


    B object2 ;
    object2.func1();
    object2.func2();
    cout<<endl;

    
    C object3;
    object3.func1();
    object3.func3();
    return  0;

}