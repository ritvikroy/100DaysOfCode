#include <bits/stdc++.h> 

using namespace std;

int main() {
    long long n;
    cin>>n;
    if(n <= 3 && n > 1) {
	 cout<<"NO SOLUTION";
	 return 0;
    }
    vector<long long> nums;
    for(long long i = 1; i <= n; i++) {
        if(i %2 == 0) cout<<i<<" ";
        else nums.push_back(i);
    }
    for(int j = 0; j < nums.size(); j++) {
        cout<<nums[j]<<" ";
    }
	return 0;
}
