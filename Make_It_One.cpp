#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long test;
    cin>>test;

    while(test--)
    {
        long long n , m;
        cin>>n>>m;

        vector<long long> vec;
        for(long long i= n ; i<= m ; i++)
        {
            vec.push_back(i);
        }

        for(long long i=0 ;i<vec.size() ; i+=2)
        {
            if(i + 1 <= vec.size() - 1)
            {
                swap(vec[i] , vec[i+1]);
            }
        }

        if((m - n + 1) % 2 == 0)
        {
            for(long long i=0 ;i<vec.size() ; i++)
            {
              cout<<vec[i]<<" ";
            }cout<<endl;
        }
        else
        {
            swap(vec[vec.size() - 1] , vec[vec.size() - 3]);
            if(vec[vec.size() - 2] % 2 == 0 && vec[vec.size() - 3] % 2 == 0)
            {
                cout<<"-1"<<endl;
            }
            else
            {
                   for(long long i=0 ;i<vec.size() ; i++)
                   {
                     cout<<vec[i]<<" ";
                   }cout<<endl;
            }
        }
    }
    return 0;
}