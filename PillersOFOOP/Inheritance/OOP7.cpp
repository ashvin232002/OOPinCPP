#include<bits/stdc++.h>
using namespace std;
//parent class   =  (member dataType)private
//child class  =  (Inheritance Type)public, protected , private
//can not accesible in any case

class Human {
    private:
     int hight;

    public:
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

    void sleep(){
        cout<<"Male Sleeping"<<endl;
    }
    
    int getHeight(){
        return this->hight;//not assesible
    }
};

int main(){

    Male object1;

    //cout<<object1.hight<<endl;//privately Inherited so can not assessible outside the class
     cout<<object1.getHeight()<<endl;//can be accessible using getter ans setter
    return  0;
}
