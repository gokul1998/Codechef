#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int i,len=s.size(),maxi=0,bal=0;
		for(i=0;i<len;i++){
			if(s[i]=='('){
			maxi++;
			//cout<<"helele"<<endl;
		}
			else maxi--;
			bal=max(bal,maxi);
			
		}
		for(i=0;i<bal;i++)cout<<"(";
		for(i=0;i<bal;i++)cout<<")";
		cout<<endl;
	}
}
