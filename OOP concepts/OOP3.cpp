#include<bits/stdc++.h>
using namespace std;


//defining a class Hero 


//Creating a Object of a class
   //2 Ways to create a Object of a class
            //1.Static Allocation 
            //2.Dynammic Allocation
                //  2.1 two ways to access the class members

class Hero{
   
    int health ;
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


    //static allocation of the class
    Hero a;
    a.level =  'G';
    a.setHealth(24);
    cout<<"Level is "<<a.level<<endl;
    cout<<"Health is "<<a.getHealth()<<endl;






    //Dynammically Allocation
    Hero *b  = new Hero;
    (*b).level ='c' ;
    b->setHealth(34);

    //we can access like this
    cout<<"Level is "<<(*b).level<<endl;
    cout<<"Health is "<<(*b).getHealth()<<endl;

    //or like this 
    cout<<"Level is "<<b->level<<endl;
    cout<<"Health is "<<b->getHealth()<<endl;
   
}

