
#include<bits/stdc++.h>
using namespace std;


//defining a class Hero 




/*
constructor:
   - Invoke during object Creation
   - No return Type
*/

class Hero{
   
    int health ;
    public:
    char level;

    //definening the constructor
    Hero(){
        cout<<"Constructor called"<<endl;
    }
    
    //defining the poarameterized Constructor
    Hero(int health){
        cout<<"this->"<<this<<endl;
        this->health  =  health;
    }
    
    Hero (int health ,char level){
        this->health =  health ;
        this->level  =  level ;
    }

    //copy constructor
    Hero(Hero& temp){
        //if I will not pass a object as a by reference then it would be converted into the infinite loop
        this->health =  temp.health;
        this->level =  temp.level;
    }
    void print(){
        cout<<"Printing the level"<<this->level<<endl;
        cout<<"Printing the health"<<this->health<<endl;
    }

    int getHealth(){
        return health;
    }

    void setHealth(int h){
        health =  h;
    }

};


int main(){

    //object created Statically 
    Hero Ramesh; // during creation of object constructor called automatically


    //Dynamically Object Creation 
    Hero *h  =  new Hero();


    Hero A(10);
    cout<<"Address of A is:"<<&A<<endl;
    /*After Executing this line we can see that the Address is same in  
    the consutructor of the address this keyword and A */

    
    Hero B(10,'C');
    cout<<B.level<<endl;
    cout<<B.getHealth()<<endl; //printing the garbage valuee



    //making the copy Constructor
    Hero C(B);
    C.print();//made  a copy constructor

    //we can also define the copy constructor inside the class

    return  0 ;

}


