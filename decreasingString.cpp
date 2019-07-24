#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int k,i,j;
		cin>>k;
		int r=k%25,full=k/25;
		if(r!=0){
			for(i=r;i>=0;i--)cout<<(char)(i+'a');
		}
		for(i=0;i<full;i++){
			for(j=25;j>=0;j--)cout<<(char)(j+'a');
		}
		cout<<endl;
	}
}
