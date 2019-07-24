#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long l,r,i,n,c,q,shift=0;
		cin>>n>>c>>q;
		while(q--){
			cin>>l>>r;
			if(l<=c && r>=c){
				shift=c-l;
				c=r-shift;
			}
		}
		cout<<c<<endl;
	}
}
