#include<bits/stdc++.h>
using namespace std;

// program is coded by aditya singh 


int factorial(int n){
	// base case 
	if(n==0){
		return 1; // return mandantory hai
	}
	return n * factorial(n-1);
	
	
}
 
int main(){
	int n;
	cin>>n;

	int ans = factorial(n);
	cout << ans <<endl;

	return 0;

}

// Program is coded with gfg

// #include <iostream>
// using namespace std;

// int factorial(int n)
// {
// 	if (n == 0 || n == 1)
// 		return 1;
// 	return n * factorial(n - 1);
// }


// int main()
// {
// 	int num;
// 	cin>>num;
	
// 	cout << factorial(num) << endl;
// 	return 0;
// }
