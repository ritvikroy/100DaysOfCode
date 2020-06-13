#include <iostream>
using namespace std;

int main() {
   long int n;
	cin>>n;
	while(n != 1) {
	    cout<<n<<"\t";
	    if(n % 2 == 0) n /= 2;
	    else {
	        n *= 3;
	        n += 1;
	    }
	}
	cout<<n;
	return 0;
}
