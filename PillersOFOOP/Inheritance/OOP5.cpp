#include<bits/stdc++.h>
using namespace std;



//parent class   =  (member dataType)protected 
//child class  =  (Inheritance Type)protected

class Human {
    protected:
     int hight;

    public:
     int weight;
     int age;

    Human(int h){
      this->hight = h;
    }
    int getAge(){
        return this->age;
    }

    int setWeight(int w){
        this->weight =  w;
    }
};



class Male : protected Human{
    public:
    string color;
     
    Male(int h):Human(h){}

    void sleep(){
        cout<<"Male Sleeping"<<endl;
    }
    
    int getHeight(){
        return this->hight;
    }
};

int main(){

    Male object1(10);
  
     //cout<<object1.hight<<endl;//protected so can not assessible outside the class
    cout<<object1.getHeight()<<endl;//can be accessible using getter ans setter
    return  0;
}
