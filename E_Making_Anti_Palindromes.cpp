#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin>>t;

    while(t--)
    {
        long long n;
        cin>>n;

        string s;
        cin>>s;

        if(n % 2 == 0)
        {
            vector<char> v;
            
            for(long long i= 0; i < n/2 ; i++)
            {
                if(s[i] == s[n-i - 1])
                {
                    v.push_back(s[i]);
                }
            }

            sort(v.begin() , v.end());

            vector<pair<long long , char>> freq;

            long long count = 1;
            int m = 0;
            if(v.size() > 0)
            {
                m = v.size() - 1;
            }
            else
            {
                m = 0;
            }

            for(long long i=0; i<m; i++)
            {
                if(v[i] == v[i+1])
                {
                    count++;
                }
                else
                {
                    freq.push_back(make_pair(count , v[i]));
                    count = 1;
                }
            }

            if(v.size() > 0)
            {
                 freq.push_back(make_pair(count , v[v.size() - 1]));
            }

            sort(freq.begin() , freq.end());
            reverse(freq.begin() , freq.end());

            long long sum = 0;
            long long first  = 0;
            char firChar = '_';

          if(freq.size() != 0)
          {
              firChar = freq[0].second;
              first = freq[0].first;
          }
    
            long long ans = 0;

            for(long long i=1; i<freq.size() ; i++)
            {
                sum += freq[i].first;
            }

            // if(first > n/2)
            // {
            //     cout<<"-1"<<endl;
            // }

            if(sum >= first)
            {
                ans += first;
                sum -= first;
                if(sum % 2 != 0) sum += 1;
                ans += (sum/2);

                cout<<ans<<endl;
            }
            else
            {
                ans += sum;
                first -= sum;
                long long county = 0;

                for(long long i=0; i<n/2; i++)
                {
                    if(s[i] != s[n - i - 1] && (firChar != s[i]) && (firChar != s[n - i - 1]))
                    {
                        county++;
                    }
                }
                if(county >= first)
                {
                    ans += first;
                    cout<<ans<<endl;
                }
                else
                {
                    cout<<"-1"<<endl;
                }
            }   
        }
        else
        {
            cout<<"-1"<<endl;
        }
    }
    return 0;
}