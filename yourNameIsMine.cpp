#include<bits/stdc++.h>
using namespace std;
int seq(char *a,char *b){
	while(*a){
		if(*a==*b)b++;
		a++;
	}
	if(*b=='\0')return 1;
	else return 0;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		char a[25000],b[25000];
		cin>>a>>b;
		if(seq(a,b) || seq(b,a))cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}
