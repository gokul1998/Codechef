#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n,i;
		cin>>n;
		long long int a[n+1],index=-1;
		for(i=0;i<n;i++)cin>>a[i];
		long long sum=0;
		/*for(i=0;i<n;i++){
			sum+=a[i];
			prefix[i]=sum;
		}
		for(i=0;i<n;i++){
			suffix[i]=sum;
			sum-=a[i];
			//cout<<"hi"<<" "<<suffix[i]<<endl;
		}*/
		long long res=INT_MAX;
		for(i=0;i<n;i++){
			if(res>a[i]){
				res=a[i];
				index=i;
			}
		}
		cout<<index+1<<endl;
	}
}
