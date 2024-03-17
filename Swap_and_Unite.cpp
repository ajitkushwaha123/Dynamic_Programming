#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	
	while(t--){
	    string s;
        cin>>s;

        s.erase(unique(s.begin() , s.end()) , s.end());
      //  cout<<s<<endl;

        sort(s.begin() , s.end());

        int count = 1;

        vector<pair<int , char>>p;

        for(int i=0 ;i<s.length() ; i++)
        {
            if(s[i] == s[i+1])
            {
                count++;
            }
            else
            {
                p.push_back(make_pair(count , s[i]));
                count = 1;
            }
        }

        sort(p.begin()  ,p.end());

        // for(int i= 0; i<p.size() ; i++)
        // {
            cout<<p[0].first - 1<<endl;
        // }
	}
	
	return 0;
}
