#include<bits/stdc++.h>
using namespace std;


int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0; i<n; i++){
		cin>>arr[i];

	
	for(int i=0; i<n; i++){
		for(int j=i+1; j<n-1; j++){
			if(arr[i]<arr[j]){
				swap(arr[i],arr[j]);
			}else{
				return arr[i];

			}
		}

	}cout<<arr<<endl;
}




	return 0;
}