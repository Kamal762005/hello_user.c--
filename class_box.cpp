#include<iostream>
using namespace std;

class Box{
    private:
    float l,w,h;
    public:
    int n;
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
    float a,b,c;
    cout<<"enter length, width and height of box"<<endl;
    cin>>a>>b>>c;
    obj.boxArea(a,b);
    obj.boxVolume(a,b,c);
    displayBoxDimensions(obj);
    obj.displayMessage();
    return 0;
}
