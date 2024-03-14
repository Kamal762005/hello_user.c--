//Demonstrate method/function overloading in C++.
#include<iostream>
using namespace std;
class Method{
    public:
    int a,b;
    void fun(){
        a=0,b=0;
        cout<<" the values of a and b are : "<<a<<" and "<<b<<endl;
    }
    void fun(int a){
        this->a=a;
        cout<<"the values of a and b are : "<<a<<" and "<<b<<endl;
    }
    void fun(int a,int b){
        this->a=a,this->b=b;
        cout<<"the values of a and b are : "<<a<<" and "<<b<<endl;
    }
/*    void print(){
        cout<<"the value of a is : "<<a<<endl<<"the value of b is : "<<b<<endl;
    }*/
};
int main(){
    int a,b;
    Method c;
    cout<<"initially the values are : \n";
    //printing the initial vlaues of the variables a and b.
    c.fun();
    cout<<"enter the value of a: ";
    cin>>a;
    
    //assigning the variable a .
    c.fun(a);
    cout<<"enter the value of b: ";
    cin>>b;

    //the values are assigned to the variables a and b.
    cout<<"after assigning the values are : \n";
    c.fun(a,b); 
    return 0;  
}
