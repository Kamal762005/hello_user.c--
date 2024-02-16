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
    cout<<"STUDENT NAME: "<<s.fullName<<endl;
    cout<<"STUDENT ROLL NO: "<<s.rollNum<<endl;
    cout<<"STUDENT SEM PERCENTAGE: "<<s.semPercentage<<endl;
    cout<<"COLLEGE NAME: "<<s.collegeName<<endl;
    cout<<"COLLEGE CODE: "<<s.collegeCode<<endl;

}

int main() {
    Student student("Chalumuri. kamal ",530,8.71,"MAHARAJ VIJAYARAM COLLEGE OF ENGINEERING",33);
    displayPrivate(student);
}
