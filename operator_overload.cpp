#include<iostream>
using namespace std;
class Operator{
    int a;
    public:
    //default constructor
    Operator(int a=0){
        this->a=a;
    }
    //operator overloading Operator 
    // This is automatically called when '-' is used with a class objects
    Operator operator-(Operator &temp){
        Operator f;
        f.a=f.a-temp.a;
        return f;
    }
    void print() {
        cout << a <<endl; 
    }
};
int main(){
    int a,b;
    cout<<"enter two values to subtract : ";
    cin>>a>>b;
    Operator c(a),d(b),e;
    e=c-d;
    cout<<"operator overloading: ";
    e.print();
}
