/*
Demonstrate the following :
1. Private Inheritance
2. Protected Inheritance
3. Public Inheritance
*/
#include<iostream>
using namespace std;
class parent{
    public:
    int a=123;
    private:
    int b=90;
    protected:
    int c=89;
    public:
    void display(){
        cout<<"public variable: "<<a<<endl;
        cout<<"private variable: "<<b<<endl;
        cout<<"protected variable: "<<c<<endl;
    }
    //changing private variable
    int getb(){
        return b;
    }
};
//public inheritence
class child: public parent{
    public:
    int privvar=getb();
    int provar=c;
};
//private inheritence
class child1: parent{
    public:
    int pubv=a,privv=getb(),prov=c;
    
};
//protected inheritence
class child2: protected parent{
    public:
    int pubva=a,privva=getb(),provva=c;
};
//main function
int main(){
    parent k;
    child k0;
    cout<<"public simple inheritance"<<endl;
    cout<<"public varaible : "<<k0.a<<endl;
    cout<<"private variable : "<<k0.privvar<<endl;
    cout<<"protected variable : "<<k0.provar<<endl<<endl;

    child1 k1;
    cout<<"private simple inheritence"<<endl;
    cout<<"public varaible : "<<k1.pubv<<endl;
    cout<<"private variable : "<<k1.privv<<endl;
    cout<<"protected variable : "<<k1.prov<<endl<<endl;

    child2 k2;
    cout<<"protected simple inheritence"<<endl;
    cout<<"public varaible : "<<k2.pubva<<endl;
    cout<<"private variable : "<<k2.privva<<endl;
    cout<<"protected variable : "<<k2.provva<<endl<<endl;
}
