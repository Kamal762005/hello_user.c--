//Demonstrate template functions and classes in C++.
#include<iostream>
#include<string>
using namespace std;
template<class T>
T fun(T &a,T &b){
    T c;
    c=a;
    a=b;
    b=c;
    return 0;
}
int main(){
    cout<<"Using Template functions\n";
    cout<<"swapping of any two data types\n";
    cout<<"1.integers,2.float,3.double4.character\n";
    //to swap two data typeswe have to know which data type it is
    int n;
    cout<<"enter your choice:\n";
    cin>>n;
    switch(n){
        case 1:
            int a,b;
            cout<<"enter two numbers:\n";
            cin>>a>>b;
            cout<<"before swapping the numbers are: "<<a<<" and "<<b<<endl;
            fun(a,b);
            cout<<"after swapping the numbers are: "<<a<<" and "<<b<<endl;
            break;
        case 2:
            float c,d;
            cout<<"enter two numbers:\n";
            cin>>c>>d;
            cout<<"before swapping the numbers are: "<<c<<" and "<<d<<endl;
            fun(c,d);
            cout<<"after swapping the numbers are: "<<c<<" and "<<d<<endl;
            break;
        case 3:
            double e,f;
            cout<<"enter two numbers:\n";
            cin>>e>>f;
            cout<<"before swapping the numbers are: "<<e<<" and "<<f<<endl;
            fun(e,f);
            cout<<"after swapping the numbers are: "<<e<<" and "<<f<<endl;
            break;
        case 4:
            char g,h;
            cout<<"enter two characters:\n";
            cin>>g>>h;
            cout<<"before swapping the characters are: "<<g<<" and "<<h<<endl;
            fun(g,h);
            cout<<"after swapping the characters are: "<<g<<" and "<<h<<endl;
            break;
/*        case 5:
            string a1,b1;
            cout<<"enter two strings:\n";
            cin>>a1>>b1;
            cout<<"before swapping the strings are: "<<a1<<" and "<<b1<<endl;
            fun(a1,b1);
            cout<<"after swapping the strings are: "<<a1<<" and "<<b1<<endl;
            break;*/
        default:
            cout<<"invalid choice\n";
            break;
    }
    return 0;
}
