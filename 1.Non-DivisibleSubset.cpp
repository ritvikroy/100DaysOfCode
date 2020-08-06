#include <bits/stdc++.h>
using namespace std;

int main() {
    int i = 0, x, y, k;
    string str1 , str2;
    cin>>str1>>str2>>k;
    while(str1[i] == str2[i]) {
        i++;
        if( i == str1.length()) {
           break; 
        }
    }
    x = (str1.length() - i) + (str2.length() - i);
    
    if( x > k ) {
        cout<<"No"<<endl;
    }
    else if(x % 2 == k % 2) {   // if x is odd then k must be odd and same for even then it print "Yes".
        cout<<"Yes"<<endl;
    }
    else if((str1.length() + str2.length()) < k) { // We can delete multiple times.
        cout<<"Yes"<<endl;
    }
    else {
        cout<<"No"<<endl;
    } 
        
    
    return 0;
}

