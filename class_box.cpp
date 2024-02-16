#include<iostream>
using namespace std;

class Box{
    public:
    int n;
    float l,w,h;
    void boxArea(float length, float width) 
    {
        l=length;
        w=width;
        cout<<"box area "<<l*w<<endl;
    }
    void boxVolume(float length, float width, float height);

    friend void displayBoxDimensions(Box);
    inline void displayMessage() {
        cout<<"hello welcome to my world in inline method"<<endl;
    }
};

void displayBoxDimensions(Box b){
    cout<<"length : "<<b.l<<endl;
    cout<<"width : "<<b.w<<endl;
    cout<<"height : "<<b.h<<endl;
}
// :: scope resolution OPERATOR
void Box::boxVolume(float length, float width, float height)
{
    l=length;
    w=width;
    h=height;
    cout<<"box volume is "<<l*w*h<<endl;
}
int main(){
    Box obj;
    cout<<"enter length, width and height of box"<<endl;
    cin>>obj.l>>obj.w>>obj.h;
    obj.boxArea(obj.l,obj.w);
    obj.boxVolume(obj.l,obj.w,obj.h);
    displayBoxDimensions(obj);
    obj.displayMessage();
    return 0;
}
