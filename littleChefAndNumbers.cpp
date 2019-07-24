#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n,i,num=0,c=0,two=0;
		cin>>n;
		for(i=0;i<n;i++){
			cin>>num;
			if(num!=0 && num!=1)c++;
			if(num==2)two++;
		}
		if(two>=2)cout<<((c*(c-1)/2)-(two*(two-1))/2)<<endl;
		else cout<<c*(c-1)/2<<endl;
	}
}
