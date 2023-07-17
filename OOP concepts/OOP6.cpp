#include<bits/stdc++.h>
using namespace std;


//Friend Function in c++

class Complex{
    private:
    int a ,b;

    public:
       void setNumber(int n1, int n2){
            a  = n1;
            b  = n2;
       }

      //Below Line means that sumComples function is allowed to anything with 
      //Private members of class Complex

       friend Complex sumComplex(Complex o1,Complex o2);
       void printNumber(){
           cout<<"Your Number is "<<a<<" +"<<b<<"i";
       }

};


Complex sumComplex (Complex o1, Complex o2){
    Complex o3;
    o3.setNumber((o1.a+o2.a),(o1.b+o2.b));
    return o3;
}
int main(){
    Complex  c1,c2,sum;

    c1.setNumber(1,4);
    c2.setNumber(5,8);
    
    c1.printNumber();
    cout<<endl;
    c2.printNumber();


   cout<<endl;
   sum = sumComplex(c1,c2);
   sum.printNumber();


    return 0;
}




//properties of Friend Function
/*
1. Not in the scope of a class
2. Since it is not in the scope of the class , it cannot be called from
   the object of that class .  c1.sumComplex() == Invalid
3. Can be invoked without the help of any object
4. Usually contains the Objects as Arguments
5. Can be declared inside public and private section of the class
6. It cannot access the member directly by their names and need 
   object_name.member_name to access any member . 
*/

