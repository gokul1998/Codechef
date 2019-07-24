#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,i=0;
		cin>>n;
		
		while(n--){
		cout<<(char)(i+'a');
		i++;
		if(i==26)i=0;	
		}
		cout<<endl;
	}
}
