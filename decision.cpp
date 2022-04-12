#include<iostream>
using namespace std;

int main() {
    int age;
    cin>>age;

    if  (age>=18) {
        cout<<("you are eligible for vote\n");
    }
    else {
        cout<<("not eligible for vote\n");
    }

    return 0;
    
}