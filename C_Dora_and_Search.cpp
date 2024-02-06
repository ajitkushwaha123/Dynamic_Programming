#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        vector<int> v;

    for(int i = 0 ;i< n ;i++)
    {
        int ele;
        cin>>ele;

        v.push_back(ele);
    }

    int min = 1;
    int max = n;
    int maxi = n , mini = 1;

    int low = 0 , high = n-1;
    int l = 1 , r= n;

    while(low <= high)
    {
        if(v[low] == min)
        {
            low += 1;
            min += 1;
        }else if(v[low] == max)
        {
            low += 1;
            max -= 1;
        }
        
        else if(v[high] == min)
        {
            high -= 1;
            min += 1;
        }
        else if(v[high] == max)
        {
            high -= 1;
            max -= 1;
        }

       // cout<<max<<" "<<min<<endl;
        
        if(v[low] != min && v[low] != max && v[high] != min && v[high] != max)
        {
            l = low + 1;
            r = high + 1;
            break;
        } 
    }

    if((l == 1 && (v[0] == mini || v[0] == maxi)) || (r == n &&( v[n-1] == mini || v[n-1] == maxi)))
    {
        cout<<"-1"<<endl;
    }
    
    else
    {
    cout<<l<<" "<<r<<endl;
    }
     
    }
}