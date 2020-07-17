#include <bits/stdc++.h> 

using namespace std;

int main() {
    int t, input;
    cin>>t;
    unordered_map<int, int> umap;
        while(t--) {
            int n;
            cin>>n;
            n *= 2;
            while(n--) {
                cin>>input;
                umap[input]++;
                if(umap[input] == 1) cout<<input<<" ";
            }
            cout<<endl;
            umap.clear();
        }
	return 0;
}
