#include<bits/stdc++.h>
using namespace std;
int main(){
	long int t;
	cin>>t;
	while(t--){
		long long i,j,res=0;
		cin>>i>>j;
		while(i!=j){
			if(i>j){
				i=i>>1;
				res++;
			}
			if(j>i){
				j=j>>1;
				res++;
			}
		}
		cout<<res<<endl;
	}
}
