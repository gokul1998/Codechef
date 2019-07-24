#include<bits/stdc++.h>
using namespace std;
const string won="CONTEST_WON";
const string bug="BUG_FOUND";
const string host="CONTEST_HOSTED";
const string top="TOP_CONTRIBUTOR";
const string ind="INDIAN";
const string non="NON_INDIAN";
int main(){
	int t;
	cin>>t;
	while(t--){
		int act,res=0;
		string s;
		cin>>act>>s;
		long long laddu=0,i;
		for(i=0;i<act;i++){
			string x;
			cin>>x;
			if(x==bug){
				int sev;
				cin>>sev;
				laddu+=sev;
			}
			else if(x==won){
				int rank;
				cin>>rank;
				if(rank<=20)laddu=laddu+(300+(20-rank));
				else laddu+=300;
			}
			else if(x==top)laddu+=300;
			else if(x==host)laddu+=50;
		}
		if(s==ind){
			res=laddu/200;
		}
		else res=laddu/400;
		cout<<res<<endl;
	}
}
