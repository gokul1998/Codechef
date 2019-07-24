#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long a,b,max,min;
		cin>>a>>b;
		if(a>b){
			max=a;
			min=b;
		}
		else{
			max=b;
			min=a;
		}
		long long power=0,i=0,sum=0,rem=0,temp=1;
		while(max || min){	
			rem=((min%10)+(max%10))%10;
			sum+=(rem*temp);
			min/=10;
			max/=10;
			temp*=10;
		}
		/*power=pow(10,i);
		sum+=(max*power);*/
		cout<<sum<<endl;
	}
}
