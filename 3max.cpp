#include<iostream>
using namespace std;

int main() {
    int sidea,sideb,sidec;
    cout<<"input three side of traingle\n";

    cin>>sidea>>sideb>>sidec;

    if(sidea==sideb && sideb==sidec){
        cout<<"its an equilateral traingle\n";
    }
    else if(sidea==sideb||sidea==sidec||sideb==sidec)
    {
        cout<<"this an isoceles traingle\n";
    }
    else{
        cout<<"this is an scalene traingle\n";
    }
    
    return 0;

}
