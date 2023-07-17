//Object Oriented Programming Reference      https://www.codingninjas.com/codestudio/guided-paths/basics-of-c/content/118817/offering/1382190

#include<bits/stdc++.h>
using namespace std;


//access Modifiers
/*   1.Public            //can be accessed from  in the class or outside of the class
     2.Private(default)  //accessed inside the class only 
     3.Protected
*/


//defining a class Hero 
class Hero{
   public:
    int health ;
    char level;

    void print(){
        cout<<level<<endl;
    }

};

int main(){

    //creating a object of the class
    Hero Ramesh;
    // cout<<"Size:  "<<sizeof(Ramesh)<<endl;
    
    Ramesh.health=26;
    Ramesh.level = 'A';
    cout<<"Health is "<<Ramesh.health<<endl;
    cout<<"Level  is "<<Ramesh.level<<endl;





    return  0 ;

}




