#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int a=103993,b=33102,r=(a%b)*10;
		long long i,k;
		cin>>k;
		if(k==0)cout<<"3";
		else{
			cout<<"3.";
			for(i=0;i<k;i++){
				printf("%c",(r/b)+'0');
				r=(r%b)*10;
			}
		}
		cout<<endl;
	}
}
