#include <bits/stdc++.h>
using namespace std;

int main(){
    int magic_mat[8][3][3] = {
        {{4, 9, 2}, {3, 5, 7}, {8, 1, 6}},
        {{2, 9, 4}, {7, 5, 3}, {6, 1, 8}},
        {{8, 1, 6}, {3, 5, 7}, {4, 9, 2}},
        {{6, 1, 8}, {7, 5, 3}, {2, 9, 4}},
        {{8, 3, 4}, {1, 5, 9}, {6, 7, 2}},
        {{4, 3, 8}, {9, 5, 1}, {2, 7, 6}},
        {{6, 7, 2}, {1, 5, 9}, {8, 3, 4}},
        {{2, 7, 6}, {9, 5, 1}, {4, 3, 8}},
    };
    int a[3][3], min_cost = 81;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cin>>a[i][j];
        } 
    }
    for(int i = 0; i < 8; i++){
        int total_cost = 0;
        for(int j = 0; j < 3; j++){
            for(int k = 0; k < 3; k++){
               total_cost+=abs(magic_mat[i][j][k] - a[j][k]);
                if(min_cost < total_cost)
                    break;
            }
        }
        if(total_cost < min_cost)
            min_cost = total_cost;
    }
    cout<<min_cost<<endl;
    return 0;
}
