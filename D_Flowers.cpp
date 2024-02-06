#include <bits/stdc++.h>
using namespace std;

int main() {
	
	long long t;
	cin>>t;
	
	while(t--){
	    long long n;
	    cin>>n;
	    
	    long long bits = log2(n) + 1;

        long long mask = 1;
        mask = mask << bits - 1;

        long long a = n-mask;
        long long b = mask;
        long long count = 0;
        long long i = n;

        if(mask == n)
        {
            cout<<"1"<<endl;
        }
        else
        {
            cout<<min({b-a , n-b , n-a})<<endl;
        }
	}
	
	return 0;
}
