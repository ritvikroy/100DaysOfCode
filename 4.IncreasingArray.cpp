#include <bits/stdc++.h> 

using namespace std;

int main() {
    vector<long long> nums;
    long long n, t, diff = 0, count = 0;
    cin>>n;
    while(n--) {
        cin>>t;
        nums.push_back(t);
    }
    
    for(long long i = 0; i < nums.size() - 1; i++) {
        if((nums[i] > nums[i + 1]))  {
            diff = (nums[i] - nums[i + 1]);
            nums[i+1] += diff;
            count += diff; 
        }
        
    }
    cout<<count;
	return 0;
}
