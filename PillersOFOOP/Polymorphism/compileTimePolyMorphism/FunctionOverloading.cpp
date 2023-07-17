#include<bits/stdc++.h>
using namespace std;

class A{
     public:
     void sayHello(){
        cout<<"Hello I am "<<endl;
     }

     //return type change karne se overlaoding nhi hota
     /*int sayHello(){
        return 1;
     }*/

     //parameter me change karne se overload ho jayega
     void sayHello(string name){
        cout<<"Hello   "<<name<<endl;
     }
};


int main(){
     A obj;
     obj.sayHello();
     obj.sayHello("Ashvin");
    return  0;

}