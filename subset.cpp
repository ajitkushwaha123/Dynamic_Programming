#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<string> p;
    int n;
    cin>>n;

    for(int i=0; i<n ; i++)
    {
        string ele;
        cin>>ele;

        p.push_back(ele);
    }

    vector<string> v;

    for(int k =0; k<p.size() ; k++)
    {
        string s = p[k];
        for(int i=0 ;i<s.length() ; i++)
        {
           string temp = "";
           temp += s[i];
           for(int j = i+1 ; j<= s.length() ; j++)
            {
              v.push_back(temp);
              temp += s[j];
            }
        }
    }

    vector<string> u;

    for(int k=0; <v.size() ; k++)
    {
        string s = p[k];
        for(int i=0 ;i<s.length() ; i++)
        {
           string temp = "";
           temp += s[i];
           for(int j = i+1 ; j<= s.length() ; j++)
            {
              u.push_back(temp);
              temp += s[j];
            }
        }

        sort(u.begin() , u.end());

        for(int i= 0; i<u.size() ; i++)
        {
            for(in)
        }
    }


    // for(int i=0; i<v.size() ; i++)
    // {
    //     cout<<v[i]<<" ";
    // }cout<<endl;
    return 0;
}