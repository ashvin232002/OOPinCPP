#include<bits/stdc++.h>
using namespace std;


//defining a class Hero 


//concept of getter and setter 
/*
   some private members can be accessed inside the class to get the
   out side of the class the concept of the getter and setter would be used 
*/
class Hero{
   
    int health ; //by default private
    public:
    char level;

    void print(){
        cout<<level<<endl;
    }

    int getHealth(){
        return health;
    }

    void setHealth(int h){
        health =  h;
    }

};

int main(){

    //creating a object of the class
    Hero Ramesh;

    Ramesh.setHealth(24);
    cout<<"Ramesh's Health is "<<Ramesh.getHealth()<<endl;

    Ramesh.level = 'A';
    cout<<"Ramesh's Level "<<Ramesh.level<<endl;
    return  0 ;

}

