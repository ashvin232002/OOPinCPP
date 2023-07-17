#include<bits/stdc++.h>
using namespace std;

//MultiLevel Inheritance
//parent(Animal)
//    |
//   Dog
//    |
// GermenShepard

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

class GermenShepherd: public Dog{

};

int main(){

    GermenShepherd g;
    g.speak();
    return  0;
}