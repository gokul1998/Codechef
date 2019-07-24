#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int i=1,a,b;
		cin>>a>>b;
		while(1){
			if(i%2==1){
				a=a-i;
			if(a<0){
			cout<<"Bob"<<endl;
			break;
		}
	}
	else{
	b=b-i;
		if(b<0){
			cout<<"Limak"<<endl;
			break;
		}
		}
		i++;
	}
}
}
