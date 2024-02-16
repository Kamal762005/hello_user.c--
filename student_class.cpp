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
            cout<<"created"<<endl;
        }
        Student(string name,int num,double sem,string coll,int code) {
            fullName = name;
            rollNum = num;
            semPercentage = sem;
            collegeName= coll;
            collegeCode = code;
        }
        friend void displayPrivate(Student);
};

void displayPrivate(Student s){
    cout<<s.fullName<<endl;
    cout<<s.rollNum<<endl;
    cout<<s.semPercentage<<endl;
    cout<<s.collegeName<<endl;
    cout<<s.collegeCode<<endl;

}

int main() {
    Student student("krishna mohan",26,7.123,"MVGR",33);
    displayPrivate(student);
}

