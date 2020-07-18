#include<bits/stdc++.h>

using namespace std;

int main(){
 
	int t,a[3];
	cin>>t;
	while(t--){
		cin>>a[0]>>a[1]>>a[2];
		sort(a,a+3);
		
		if(a[1] == a[2]) cout<<"Yes\n"<<1<<" "<<a[0]<<" "<<a[2]<<endl;
		else cout<<"No"<<endl;
	}
}
