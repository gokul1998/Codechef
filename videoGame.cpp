#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
struct topcrane{
	ll pos,val;
};
int main(){
	ll n,i,h,c;
	cin>>n>>h;
	ll a[n];
	topcrane crane;
	crane.pos=0,crane.val=0; 
	for(i=0;i<n;i++)cin>>a[i];
	while(1){
		cin>>c;
		if(c==1){
			if(crane.pos>0)crane.pos--;
		}
		else if(c==2){
			if(crane.pos<n-1)crane.pos++;
		}
		else if(c==3){
			if(a[crane.pos]>0 && crane.val==0){
				a[crane.pos]--;
				crane.val++;
			}
		}
		else if(c==4){
			if(a[crane.pos]+crane.val<=h && crane.val>0){
				a[crane.pos]++;
				crane.val--;
			}
		}
		else if(c==0)break;
	}
	for(i=0;i<n;i++)cout<<a[i]<<" ";
	cout<<endl;
}
