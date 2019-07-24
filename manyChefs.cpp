#include<bits/stdc++.h>
using namespace std;
int main(){
	long t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int i,len=s.size(),c=0,h=0,e=0,f=0,count=0;
		for(i=len-1;i>=0;i--){
			if(s[i]=='?' || s[i]=='F'){//cout<<"first"<<endl;
				if(i-1>=0 && (s[i-1]=='?' || s[i-1]=='E')){//cout<<"second"<<endl;
					if(i-2>=0 && (s[i-2]=='?' || s[i-2]=='H')){//cout<<"third"<<endl;
						if(i-3>=0 && (s[i-3]=='?' || s[i-3]=='C')){//cout<<"fout"<<endl;
					s[i]='F',s[i-1]='E',s[i-2]='H',s[i-3]='C';
					i=i-3;
				}
				}	
				}
			}
			//else i--;
			//cout<<i<<endl;
		}
		for(i=0;i<len;i++){
			if(s[i]=='?')s[i]='A';
		}
		cout<<s<<endl;
	}
}
