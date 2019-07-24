#include<bits/stdc++.h>
using namespace std;
int main(){
	int dollar,cent,c,t;
	cin>>t;
	while(t--){
		cin>>dollar>>cent>>c;
		int maxi=(dollar*100)+cent,mini=0,temp,i=0;
		while(((dollar*100)+cent)>=c && i<=10000){
			i++;
			if(cent>=c)cent-=c;
			else if(dollar>0){
				dollar--;
				cent+=(100-c);
			}
			temp=dollar;
			dollar=cent;
			cent=temp;
			if(((dollar*100)+cent)>maxi){
				maxi=(dollar*100)+cent,mini=i;
			}
			//cout<<"dd"<<endl;
		}
		cout<<mini<<endl;
	}
}
