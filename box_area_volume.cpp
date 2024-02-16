#include<iostream>
#include "boxVolume.h"
#include "boxArea.h"
using namespace std;
int main()
{
    float l,b,h;
    cout<<"Enter length of box: ";
    cin>>l;
    cout<<"Enter width of box: ";
    cin>>b;
    cout<<"Enter height of box: ";
    cin>>h;
    boxArea(l,b,h);
    boxVolume(l,b,h);
    return 0;
}
