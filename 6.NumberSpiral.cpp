#include <bits/stdc++.h> 

using namespace std;

int main() {
    long long t, x, y;
    cin>>t;
    while(t--) {
        cin>>y>>x;
        long long z;
        z = max(y, x);
        long long ap;
        ap = z*(z-1) + 1;
        long long ans;
        if(z%2 == 0) {
            ans = ap + y - x;
        } else {
            ans = ap + x - y; 
        }
        cout<<ans<<"\n";
    }
    
	return 0;
}
