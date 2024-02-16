#include<iostream>
using namespace std;
class Student{
    private:
        string fullName;
        int rollNum;
        double semPercentage; 
        string collegeName;
        int collegeCode;
    public:
    Student(){
        cout<<"default constructor"<<endl;
        collegeName="MVGR";
        collegeCode=33;
        cout<<"college name is "<<collegeName<<endl;
        cout<<"college code is "<<collegeCode<<endl;
    }
    Student(string name, double sem){
        cout<<"parameterized constructor"<<endl;
        fullName=name;
        semPercentage=sem;
        cout<<"full name is "<<fullName<<endl;
        cout<<"sem percentage is "<<semPercentage<<endl;
    }
};
int main(){
    Student s1;
    string s;
    double x;
    cout<<"enter the name : "<<endl;
    getline(cin,s);
    cout<<"enter the sem percentage : "<<endl;
    cin>>x;
    Student s2(s,x);
}
