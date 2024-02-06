#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        vector<vector<pair<int , int>>> v;

        for(int i= 0; i<3 ; i++)
        {
            vector<pair<int , int>> row;

            for(int j = 0; j< n ; j++)
            {
                int ele;
                cin>>ele;
                row.push_back(make_pair(ele , j));
            }

            sort(row.begin() , row.end());
            reverse(row.begin() , row.end());

            v.push_back(row);
        }

        int sum = 0;
        int result = 0;
        vector<pair<int , int>> ans;
        
        for(int i =0; i<3 ; i++)
        {
            sum += v[0][i].first;
            for(int j= 0 ; j<3;  j++)
            {
                if(i != 0)sum += v[j][i].first;
            }
            cout<<sum<<endl;
         //   result = max(result , sum);
        }

        
    }
    return 0;
}