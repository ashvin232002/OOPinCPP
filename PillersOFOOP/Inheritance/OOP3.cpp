#include<bits/stdc++.h>
using namespace std;

//parent class   =    (member dataType)public
//child class  =  (Inheritance Type)private 

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



class Male : private Human{
    public:
    string color;
   
    Male(string c ){
      this->color  = c;
    }
    void sleep(){
        cout<<"Male Sleeping"<<endl;
    }
    
    int getHeight(){
        return this->hight;
    }
};

int main(){

    Male object1("hell");

    cout<<object1.color<<endl;//This can be accessible.
    //cout<<object1.hight<<endl;//private so can not assessible outside the class
    cout<<object1.getHeight()<<endl;//can be accessible using getter ans setter
    return  0;
}
