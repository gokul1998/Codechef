#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int h,m,i,res=1,temp;
		cin>>h>>m;
		int len=h-1;
		for(i=1;i<=len;i++){
			temp=i;
			if(temp>9 && temp%11==0)temp=i%10;
			while(temp<m){
				if(temp>9 && temp%11!=0)break;
				//cout<<i<<"  "<<temp<<endl;
				res++;
				temp=(temp*10)+i%10;
			}
		}
		cout<<res<<endl;
	}
}
