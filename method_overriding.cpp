#include<iostream>
using namespace std;

class Parent{
    public:
    void print(){
        cout << "hai! this is a parent class" << endl;
    }  
};
class Child : public Parent{
    public:
    void print(){
        cout << "hai! this is a child class" << endl;
    }
};
int main(){  
    Child c;
    c.print();
    //c.print("MVGR");
}
