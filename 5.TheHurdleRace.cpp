#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, m, max = -999999;
    cin>>n>>m;
    int a[n];
    for(int i = 0;i < n;i++) {
        cin>>a[i];
        if(a[i] > max) {
            max = a[i];
        }
    }
    if(m > max) {
        cout<<0<<endl;
    }
    else {
        cout<<max - m<<endl;
    }
    return 0;
}

