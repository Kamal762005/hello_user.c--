#include<iostream>
using namespace std;
class Method{
    int a;
    public:
    //default constructor
    Method(int a=0){
        this->a=a;
    }
    //operator overloading method 
    // This is automatically called when '-' is used with a class objects
    Method operator-(Method &temp){
        Method f;
        f.a=a-temp.a;
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
    Method c(a),d(b),e;
    e=c-d;
    cout<<"operator overloading: ";
    e.print();
}
