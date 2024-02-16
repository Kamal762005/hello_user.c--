#include<iostream>
#include "boxArea.h"
#include "boxVolume.h"
using namespace std;
int main(){
    float l,b,h;
    cout<<"enter the length, breadth, height : ";
    cin>>l>>b>>h;
    boxArea(l,b,h);
    cout<<"enter the length, breadth, height : ";
    cin>>l>>b>>h;
    boxVolume(l,b,h);
}
