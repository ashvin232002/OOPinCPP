//Concept of Deep and shalow Copy 

#include<bits/stdc++.h>
using namespace std;

class Hero{
   
    int health ;

    public:
    char* name;
    char level;

    static int timeTocomplete;

    //definening the constructor
    Hero(){
        cout<<"Constructor called"<<endl;
        name  =  new char[100];
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

    // copy constructor
    Hero(Hero& temp){
        //if I will not pass a object as a by reference then it would be converted into the infinite loop

        char *ch  =  new char[strlen(temp.name)+1];
        strcpy(ch,temp.name);
        this->name=  ch;
        this->health =  temp.health;
        this->level =  temp.level;
    }
    void print(){
        cout<<endl;
        cout<<"Printing The name    "<<this->name<<endl;
        cout<<"Printing the level   "<<this->level<<endl;
        cout<<"Printing the health  "<<this->health<<endl;
    }

    int getHealth(){
        return health;
    }


    void setlevel(char c){
        level  = c;
    }
    void setHealth(int h){
        health =  h;
    }
  

    void setName(char name[]){
        strcpy(this->name,name);
    }

    //static function
    //only use static variables otherwise give error
    static int random(){
        // cout<<level<<endl; //gives error because non static member
        return timeTocomplete;
    }

    //destructor called
    ~Hero(){
        cout<<"Destructor called"<<endl;
    }
};

int Hero :: timeTocomplete =  5;


int main(){
//    Hero hero1;
//    //comment your own constructor use default constructor
//    hero1.setHealth(12);
//    hero1.setlevel('D');
//    char name[7]= "Babbar";
//    hero1.setName(name);
//    hero1.print();


//    //creating the copy constructor
//    Hero  hero2(hero1);
//    hero2.print();

//    //now changing the name
//    //here we can see that change in the one object actuall reflected at another object
//    //shalow copy
//    hero1.name[0]='A';
//    hero1.print();
//    hero2.print();

   Hero hero3;
   char name[7] = "Kabbar";
   hero3.setName(name);
   hero3.print();

   Hero hero4(hero3);
   
   hero3.name[0]='G';
   hero3.print();
   hero4.print();
   //the change would not reflected on another object DEEP COPY

   //uncomment your own constructor




   //accessing a static member without creating object
   cout<<Hero::timeTocomplete<<endl;
   cout<<"Printing the random (static)Function "<<Hero::random()<<endl;
   return  0;
}


/*
Tha main diff of the Deep  and shalow copy constructor is 
1.Shalow Copy Constructor
   The copied object and actual object pointing to the same location so that the 
   in the change of the actual object the change would also be reflected at the 
   copied Constructor (Same Memmory Pointing)
   
   
2.Deep Copy Constructor
   The Deep  Copy Constructor actually uses the extra memory not point to the same memory
   location so the change in the actual object would not be reflected at the coped
   object*/



//check also about copy assignment operator



//Destructor
/* memory deallocate
   //no return type

   //static allocation ke liye  destructor automatically called
   //dynammic allocation ke liye destructor manually call karna padega  (delete objectname)
*/


//explore
/*
   const Keyword 
       Object creation
       initialisation List
       functions
       member data
*/



//static keyword
/*
  static keyword can be accessed without creating object
*/

//static function
/*
  static function can be accessed without creating object

  IMMMMMMP
  static function can only access the static variables
*/