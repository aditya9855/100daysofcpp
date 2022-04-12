#include<iostream>
using namespace std;

int main() {
    int x,y;
    cin>>x>>y;

    if(x==y) {
        cout<<"both numbers are equal\n";
    }
    else if(x>y) {
        cout<<"x is greater than y\n";
    }
    else{
        cout<<"y is greater than x\n";
    }
    
    return 0;

}