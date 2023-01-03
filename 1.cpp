#include<bits/stdc++.h>
using namespace std;


//recursion 
// we try to solve a bigger problem by finding out solution to 
// smaller sub problems we represent these problems in the form 
// of function and these functoin call itself[ base case value we know always]

void naturalnumber(){
    int k;
    cin>>k;
    if(k==1){
        cout<<"1"<<endl;
    }else{
        int z=(k*(k+1))/2;
        cout<<z<<endl;
    }
}

int main(){
    naturalnumber();
    return 0;
    
}