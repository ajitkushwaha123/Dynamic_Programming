#include <bits/stdc++.h>
using namespace std;

int main() {
	
	long long t;
	cin>>t;
	
	while(t--){
	    long long n;
        cin>>n;

        long long mask = 1;

        long long bits = log2(n) + 1;
     //   cout<<bits<<endl;

        long long count = 0;

        while(bits > 0)
        {

            if((n & mask))
            {
                count++;
            }
            mask = mask<<1;
            bits --;
        }

     //   cout<<count<<endl;

        if(count % 2 == 0)
        {
            cout<<"EVEN"<<endl;
        }
        else
        {
            cout<<"ODD"<<endl;
        }
	}
	
	return 0;
}
