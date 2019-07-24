#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int i,c=0,year,mini,maxi;
		string a[7]={"sunday","monday","tuesday","wednesday","thursday","friday","saturday"};
		cin>>year;
		int s=1900,d=1;
		while(s<year){
			if((s%400==0)||(s%4==0 && s%100!=0))d=(d+2)%7;
			else d=(d+1)%7;
			s++;
		}
		cout<<a[d]<<endl;
		}
}
