#include <bits/stdc++.h> 

using namespace std;

int main() {
    long long n;
	cin>>n;
	int t;
	vector<int> nums;
	while(--n){
	    cin>>t;
	    nums.push_back(t);
	}
	
	sort(nums.begin(), nums.end());
	
    for(int i = 0; i <= nums.size(); i++) {
        if((i + 1) != nums[i]) {
           cout<<i + 1;
            return 0;
        }
    }
	return 0;
}
