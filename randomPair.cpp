#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,i;
		float res=0;
		cin>>n;
		int a[n+1],b[1001]={0};
		for(i=0;i<n;i++)cin>>a[i];
		for(i=0;i<n;i++)b[a[i]]++;
		int one=-1,two=-1;
		for(i=1000;i>=0;i--){
			if(b[i]!=0 && one==-1)one=i;
			if(b[i]!=0 && one!=-1 && one!=i && two==-1)two=i;
			//if(i==3)cout<<"second = "<<two<<" first = "<<one<<endl;
		}
		//cout<<"one = "<<one<<"  two = "<<two<<endl;
		//cout<<"count of one ="<<b[one]<<"  count of two = "<<b[two]<<endl;
		if(b[one]>1){
		//cout<<"if b[one]-1 = "<<b[one]-1<<endl;
			res=(float)(b[one]*(b[one]-1)/2)/(n*(n-1)/2);
		}
		else if(b[two]>1){
			//cout<<"else if b[two] = "<<b[two]<<endl;
			res=(float)b[two]/(n*(n-1)/2);
		}
		else{
			res=(float)1/(n*(n-1)/2);
		}
		cout<<fixed<<setprecision(8)<<res<<endl;
	}
}
