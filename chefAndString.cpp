#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin>>s;
	long long i,len=s.size(),count=0;
	//int a[4]={0};
	char t=' ';
	for(i=0;i<len;){
		if(t==' ' || t=='F')
		{
		while(s[i]!='C'&& i<len)i++;
	}
	    t=s[i];
	    if(t=='C'){
		while(s[i]!='H' && i<len)i++;
	}
		t=s[i];
		if(t=='H'){
		while(s[i]!='E' && i<len)i++;
	}
		t=s[i];
		if(t=='E'){
			while(s[i]!='F' && i<len)i++;
		}
		t=s[i];
		if(s[i]=='F' && i<=len){
		count++;
		//cout<<i<<endl;
		}
		i++;
	}
	cout<<count<<endl;
}
