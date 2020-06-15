#include <bits/stdc++.h> 

using namespace std;

int main() {
    string str;
	cin>>str;
	int max = 0, count = 1;
	for(int i = 1; i < str.length(); i++) {
	    if(str[i] == str[i - 1]) {
	        count++;
	        if(count > max) max = count;
	    } else {
	        count = 1;
	    }
	}
	if(max == 0 && str.length() > 0) max++;
	
	cout<<max;
	return 0;
}
