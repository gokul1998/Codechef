#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,i,m;
		cin>>n>>m;
		double num=(m+n-1)*1.0;
		/*double res=0.0,x=1.0;
		if(n==m){
		for(i=1;i<=num;i++){
			if(i==1|| i==num)res+=1.0;
			else if(i<=3){
				res=res+(i*x*1.0);
			}
			else{
				n--;
				res=res+(n*x*1.0);
			}
			//cout<<"i = "<<i<<"  x= "<<x<<endl;
			x=x/2;
		}}
		else{
			for(i=1;i<=num;i++){
				if(i==1 || i==num)res+=1.0;
				else res=res+(n*x*1.0);
				cout<<"i = "<<i<<"res = "<<res<<endl;
				x=x/2;
			}
		}*/
		cout<<fixed<<setprecision(5)<<num<<endl;
	}
}
