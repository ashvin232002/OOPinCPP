#include<bits/stdc++.h>
using namespace std;

// more than 1 parent class
// Inherite another class
class Animal {
   public:
   int age;
   int weight;

   public:
   void bark(){
    cout<<"Barking..."<<endl;
   }

};


class Human{
    string color;
    public:
    void speak(){
        cout<<"Speaking..."<<endl;
    }
};



// Multiple Inheritance
class Hybrid : public Animal ,public Human{

}; 


int main(){

    //hybrid class have both property human and animal
    Hybrid h;
    h.bark();
    h.speak();
    return  0;
}