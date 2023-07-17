#include<bits/stdc++.h>
using namespace std;


int main(){


    return 0 ;

}
//parent class   =  (member dataType)protected 
//child class  =  (Inheritance Type)protected

class Human {
    protected:
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



class Male : public Human{
    public:
    string color;

    void sleep(){
        cout<<"Male Sleeping"<<endl;
    }
    
    int getHeight(){
        return this->hight;
    }
};

int main(){

    Male object1;

     //cout<<object1.hight<<endl;//protected so can not assessible outside the class
    cout<<object1.getHeight()<<endl;//can be accessible using getter ans setter
    return  0;
}