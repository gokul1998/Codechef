#include<bits/stdc++.h>
using namespace std;
int convert(char a[]){
	int minute=0;
	minute=(a[0]-'0')*10+(a[1]-'0');
	minute=minute*60;
	minute=minute+((a[3]-'0')*10+(a[4]-'0'));
	return minute;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		char time1[6],time2[6];
		int res2=0,res1=0,dist,i,chefmin=0,girlmin=0,diff=0;
		cin>>time1>>time2;
		cin>>dist;
		chefmin=convert(time2);
		girlmin=convert(time1);
		diff=girlmin-chefmin;
		res1=diff+dist;
		if(2*dist<=diff)res2=diff;
		else{
			if(time1<=time2+dist){
				int w1=time2+dist-time1;
				res2=dist+(dist-w1)/2.0;
			}
		}
		cout<<res1<<".0 "<<res2<<".0"<<endl;
	}
}
