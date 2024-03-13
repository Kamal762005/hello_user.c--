#include<iostream>
using namespace std;
class Method{
    public:
    int a,b;
    void fun(){
        cout<<"function is called \n";
    }
    void fun(int a,int b){
        this->a=a,this->b=b;
    }
    void fun(float a,float b){
        this->a=a,this->b=b;
    }
    void print(){
        cout<<"the value of a is : "<<a<<endl<<"the value of b is : "<<b<<endl;
    }
};
int main(){
    int a,b;
    cout<<"enter the values : ";
    cin>>a>>b;
    Method c;
    c.fun();
    cout<<"initially the values are : \n";
    //printing the initial vlaues of the variables a and b.
    c.print();
    cout<<"after assigning the values are : \n";
    c.fun(a,b);
    //the values are assigned to the variables a and b.
    c.print();
    return 0;
}
