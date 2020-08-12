#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;


int main() {
    string str, str2 = "";
    cin>>str;
    if(str[8] == 'P') { 
        if(str[0] == '1' && str[1] == '2') 
            ;
        else {    
        str[0] = str[0] + 1;
        str[1] = str[1] + 2;
    } }
    if(str[8] == 'A') 
        if(str[0] == '1' && str[1] == '2') {
           // cout<<str[0]<<" ";
            str[0]= '0';
            str[1]= '0';
    }
   // str[8] = '\0', str[9] = '\0';
    for(int i = 0; i < str.length() - 2; i++){
       str2+= str[i]; 
    }
    cout<<str2<<endl;
    return 0;
}

