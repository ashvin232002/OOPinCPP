#include<bits/stdc++.h>
using namespace std;


//single Inheritance : Inherite Property From the Parent Class
class Animal {
   public:
   int age;
   int weight;

   public:
   void speak(){
    cout<<"Speaking..."<<endl;
   }

};

class Dog: public Animal{


};
int main(){

    Dog d;
    d.speak();
    return  0;
}