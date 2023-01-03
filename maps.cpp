#include<bits/stdc++.h>
using namespace std;

int main(){
	map<string,int> mp;
	mp["harry"]= 98;
	mp["harry1"]= 55;
	mp["harry1"]= 85;

	map<string, int>::iterator iter;

	for( iter=mp.begin(); iter!=mp.end(); iter++){
		cout<<(*iter).first<<""<(*iter).second<<"\n";
	}

}