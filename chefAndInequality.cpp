#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long int j,i,a,b,c,d;
		cin>>a>>b>>c>>d;
		long long int ans=0,temp=0;
		for(i=a;i<=b;i++){
			for(j=c+temp;j<=d;j++){
				
				if(i<j)break;
				temp++;
			}
			ans+=d-j+1;
			//temp=j;
			//cout<<"ans = "<<ans<<endl;
		}
		cout<<ans<<endl;
	}
	/*Try this input :
	1
    2 999999 1 1000000
	*/
}
