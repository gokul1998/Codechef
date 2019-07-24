#include<bits/stdc++.h>
using namespace std;
string makelargestpalinbyk(string s,int k){
	int len=s.size(),l,r,i;
	string palin=s;
	l=0,r=len-1;
	while(l<r){
		if(s[l]!=s[r]){
			palin[l]=palin[r]=max(s[l],s[r]);
			k--;
		}
		l++;
		r--;
	}
	if(k<0)return "Not possible";
	l=0,r=len-1;
	while(l<=r){
		if(l==r && k>0)palin[l]='9';
		if(palin[l]<'9'){
			if(k>=2 && palin[l]==s[l] && palin[r]==s[r]){
				k-=2;
				palin[l]=palin[r]='9';
			}
			else if(k>=1 && (palin[l]!=s[l] || palin[r]!=s[r])){
				k-=1;
				palin[l]=palin[r]='9';
			}
		}
		l++;
		r--;
	}
	return palin;
}
int main(){
	string s;
	cin>>s;
	//Make largest palindrome by changing at most K-digits
	int k;
	cin>>k;
	cout<<makelargestpalinbyk(s,k)<<endl;
}
