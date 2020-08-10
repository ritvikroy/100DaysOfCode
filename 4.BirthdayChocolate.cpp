#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    int arr[n], d, m, ways = 0, sum = 0, count = 0;
    for (int i = 0; i < n; i++){
        cin>>arr[i];
    }
    cin>>d>>m;
    for(int i = 0; i < n; i++){
        count++;
        sum = sum + arr[i];
       
        
        if(count == m ){
             if(sum == d){
             ways++;
             }count = m - 1;
            sum = sum - arr[i - (m - 1)];
        }
            
    }
    cout<<ways<<endl;
    return 0;
}

