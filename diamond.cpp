#include<iostream>
using namespace std;
class parent{
    public:
    void displayp1(){
        cout<<"parent class "<<endl;
    }
};
class child0: public parent{
    public:
    void display0(){
        cout<<"subclass child0 inherits parent"<<endl;
    }
};
class child1: public parent{
    public:
    void display1(){
        cout<<"subclass child1 inherits parent"<<endl;
    }
};
class child2: public child0,public child1{
    public:
    void display2(){
        cout<<"subclass child2 inherits subclasses child0 and child1 "<<endl;
    }
};
int main(){
    child2 a;
    a.display0();
    a.display1();
    a.display2();
    return 0;
}
