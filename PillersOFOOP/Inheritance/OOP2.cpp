//protected Classs Members:
/*
 the One main Thing about the Protected class is that the member function can be accesible
 inside the class 
    OR 
 inside the Inherited class
*/



// parent class :   (member dataType)Public   
//Inherited class : (Inheritance Type)Protected 
#include<bits/stdc++.h>
using namespace std;



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



class Male : protected Human{
    public:
    string color;

    void sleep(){
        cout<<"Male Sleeping"<<endl;
    }
    

    //is Protected class So assesible ins side the class
    int getHeight(){
        return this->hight;
    }
};

int main(){

    Male object1;

    //can not accessible directly because it is protectedly inherited 
    // cout<<object1.hight<<endl;

    cout<<object1.getHeight()<<endl;
    return  0;
}