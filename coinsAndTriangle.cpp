#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long int n,c=0,i=1;
		cin>>n;
		while(n>=0){
			n=n-i;
			if(n>=0)c++;
			i++;
		}
		cout<<c<<endl;
	}
}
