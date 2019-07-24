#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int i,a=0,b=0,e=0,len=s.size();
		char t=' ';
		for(i=0;i<len;i++){
			if((t=='A' && s[i]=='B' && i-1>=0 && s[i-1]=='.')||(t=='B' && s[i]=='A' && i-1>=0 && s[i-1]=='.'))e=0;
			if((t==' ' && s[i]=='A')||(t==' ' && s[i]=='B'))e=0;
			if(t==s[i]){
				if(t=='A'){
					a+=e;
				}
				if(t=='B'){
					b+=e;
	        }
				e=0;
			}
			if(s[i]=='A')a++;
			else if(s[i]=='B')b++;
			if(s[i]!='.')t=s[i];
			else e++;
			
			//cout<<"s[i] = "<<s[i]<<"  a = "<<a<<" b= "<<b<<" t = "<<t<<" e= "<<e<<endl;;
		}
		cout<<a<<" "<<b<<endl;
	}
}
