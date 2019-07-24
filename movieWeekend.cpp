#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,i;
		cin>>n;
		int l[n],r[n];
		for(i=0;i<n;i++)cin>>l[i];
		for(i=0;i<n;i++)cin>>r[i];
		long long max=-1,index=-1,rating=-1,curr=0;
		for(i=0;i<n;i++){
			curr=l[i]*r[i];
			if(curr>=max){
				if(curr==max){
					if(r[i]>rating){
						rating=r[i];
						max=curr;
						index=i;
					}
				}
				else{
					max=curr;
					rating=r[i];
					index=i;
				}
			}
		}
		cout<<index+1<<endl;
	}
}
