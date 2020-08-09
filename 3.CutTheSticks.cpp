#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, min = 999999, count = -99;
    cin>>n;
    int a[n];
    for(int i = 0; i < n; i++) {
        cin>>a[i];
    }
    while(count != 0){
        count = 0;
        min = 99999;
        for(int i = 0; i < n; i++) {
            if(a[i] < min && a[i] > 0) {
            min = a[i];
            }
        }   int i;
        for(i = 0; i < n; i++) {
            a[i] = a[i] - min;
            if(a[i] >= 0) count++;
        } 
        if(count == 0) break;
        cout<<count<<endl;
       // if(count == 1) break; 
    }
    
    return 0;
}

