//Reference : https://www.codingninjas.com/codestudio/guided-paths/basics-of-c/content/118817/offering/1382190
//Diff between abstraction & Encapsulations :  https://stackoverflow.com/questions/742341/difference-between-abstraction-and-encapsulation


/*
//Encapsulation : "Information Hiding / Data Hiding"
  -Data Hide  -- Security high
  -if we want we can make class read only
  -code redability high
*/

#include<bits/stdc++.h>
using namespace std;
class Student{
    private:
      string name;
      int age;
      int height;

    public:
        int getAge(){
            return this->age;
        }


};


int main(){

    Student first;

    cout<<"SAB KUCH SAHI CHAL RIYA H";
    return  0;
}