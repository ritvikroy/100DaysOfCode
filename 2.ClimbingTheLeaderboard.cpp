#include <iostream>
#include <stack>
using namespace std;

int main() {
    unsigned long int n, m, i, tmp;
    cin>>n;
    stack <unsigned long> score;
    for(int i = 0; i < n; i++) {
        cin>>tmp;
       if(score.empty() || score.top() != tmp) score.push(tmp); 
    }
    cin>>m;
    for(int i = 0; i < m; i++) {
        cin>>tmp;
        while(!score.empty() && tmp >= score.top()) score.pop();
        cout<<score.size() + 1<<endl;
    }
    return 0;
}
