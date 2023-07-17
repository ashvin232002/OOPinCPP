#include<bits/stdc++.h>
using namespace std;

/*
 Inheritance

 Inherite some roperties from some other class

      HUMAN(PARENT CLASS)
    /      \
  MALE     FEMALE

  //SUb class -   THE CLASS THAT INHERITS PROPERTIES FROM ANOTHER CLASS IS CALLED AS A SUBCLASS OR DERIVED CLASS
  //(PARENT CLASS)Super class - THE CLASS WHOSE PROPERTIES ARE INHERITED BY THE SUBCLASS IS CALLED BASE CLASS OR SUPERCLASS



  base class    public   protected    private
-------------------------------------------------------
  public        public   protected    private
  protected     protected protected   private
  private       NA        NA          NA


  //Private Data Member of any class can not be accessible
*/





//parent class :   (member dataType)public
//Inherited class : (Inheritance Type)Public
class Human {
    public:
     int hight;
     int weight;
     int age;

    int getAge(){
        return this->age;
    }

    int setWeight(int w){
        this->weight =  w;
    }
};

class Male : public Human{
    public:
    string color;

    void sleep(){
        cout<<"Male Sleeping"<<endl;
    }
};


int main(){
    Male Object1;
    cout<<Object1.age<<endl;
    cout<<Object1.weight<<endl;

    Object1.setWeight(100);
    cout<<Object1.weight<<endl;
    Object1.sleep();

    return  0 ;
}