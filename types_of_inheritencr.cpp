#include<iostream>
using namespace std;
class parent1{
    public:
    void displayp1(){
        cout<<"parent class 1 "<<endl;
    }
};
class parent2{
    public:
    void displayp2(){
        cout<<"parent class 2 "<<endl;
    }
};
//hierarchial inheritence
class child0: public parent1{
    public:
    void display0(){
        cout<<"subclasss child0 inherits parent1 "<<endl;
    }
};
class child1: public parent1{
    public:
    void display1(){
        cout<<"subclasss child1 inherits parent1"<<endl;
    }
};
//simple inheritance
class child2: public parent2{
    public:
    void display2(){
        cout<<"subclasss child2 inherits parent2"<<endl;
    }
};
//multiple inheritence
class child3: public parent1,public parent2{
    public:
    void display3(){
        cout<<"subclasss child1 inherits parent1,parent2 "<<endl;
    }
};
//multilevel inheritence
class child4: public child0{
    public:
    void display4(){
        cout<<"subclasss child4 inherits subclass child0"<<endl;
    }
};
//hybrid inheritence
class child5: public child0,public child2{
    public:
    void display5(){
        cout<<"subclasss child5 inherits subclasses child0 and child1 "<<endl;
    }
};
int main(){
    //simple inheritence
    child2 a;
    cout<<"Simple Inheritance\n";
    a.display2();
    a.displayp2();
    //multiple inheritence
    child3 b;
    cout<<"Multiple Inheritance\n";
    b.display3();
    b.displayp1();
    b.displayp2();
    //multi level inheritence
    child4 c;
    cout<<"Multi-Level Inheritance\n";
    c.display0();
    c.display4();
    c.displayp1();
    //hierarchial inheritence
    child0 d;
    child1 e;
    cout<<"Hierarchical Inheritance\n";
    d.display0();
    d.displayp1();
    e.display1();
    e.displayp1();
    //hybrid inheritence
    child5 f;
    cout<<"Hybrid Inheritance\n";
    f.display5();
    f.display0();
    f.display2();
    f.displayp1();
    f.displayp2();
    return 0;
}
