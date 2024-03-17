#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;

    int zero = 0;


    for(int i=1 ;i<s.length() ; i++)
    {
        if(s[i] == '0')
        {
            zero++;
        }
        else
        {
            break;
        }
    }
    long long i1 = -999 , i2  = -999, i3 = -999 , i4  = -999 , i5 = -999 , i6 = -999 , i7 = -999 , i8 = -999;
    reverse(s.begin() , s.end());

    long long ans1= 0 , ans2 = 0, ans3 = 0 , ans4 = 0;

    for(long long i=0 ;i<s.length() ; i++)
    {
        if(s[i] == '0')
        {
            i1 = i;
            break;
        }
    }

    for(long long i=0 ;i<s.length() ; i++)
    {
        if(s[i] == '0' && i != i1)
        {
            i2 = i;
            break;
        }
    }

    // cout<<i1<<" "<<i2<<endl;
    ans1 += i1 + i2 - 1;
  //  cout<<ans1<<endl;

    //For 25

    
    for(long long i=0 ;i<s.length() ; i++)
    {
        if(s[i] == '2')
        {
            i3 = i;
            break;
        }
    }

    for(long long i=0 ;i<s.length() ; i++)
    {
        if(s[i] == '5')
        {
            i4 = i;
            break;
        }
    }

    // cout<<i1<<" "<<i2<<endl;
    if(i4 < i3)
    {
        ans2 += i3 + i4 - 1;
    }
    else
    {
        ans2 += i3 + i4;
    }
  //  cout<<ans2<<endl;

    //For 50
 
    for(long long i=0 ;i<s.length() ; i++)
    {
        if(s[i] == '5')
        {
            i5 = i;
            break;
        }
    }

    for(long long i=0 ;i<s.length() ; i++)
    {
        if(s[i] == '0')
        {
            i6 = i;
            break;
        }
    }
    
    // cout<<i1<<" "<<i2<<endl;
    if(i6 < i5)
    {
        ans3 += i6 + i5 - 1;
    }
    else
    {
        ans3 += i6 + i5;
    }
   // cout<<ans3<<endl;

     //For 75
 
    for(long long i=0 ;i<s.length() ; i++)
    {
        if(s[i] == '7')
        {
            i7 = i;
            break;
        }
    }

    for(long long i=0 ;i<s.length() ; i++)
    {
        if(s[i] == '5')
        {
            i8 = i;
            break;
        }
    }
    
    // cout<<i1<<" "<<i2<<endl;
    if(i8 < i7)
    {
        ans4 += i8 + i7 - 1;
    }
    else
    {
        ans4 += i8 + i7;
    }

    
    if(s[s.length() - 2] == '0')
    {
        // if(i1 > s.length() - 2)
        // {
        //     ans1 += 1;
        // }

        // if(i2 > s.length() - 2)
        // {
        //     ans1 += 1;
        // }

        if(i3 > s.length() - 2)
        {
            ans2 += zero;
        }

        if(i4 > s.length() - 2)
        {
            ans2 += zero;
        }

        // if(i6 > s.length() - 2)
        // {
        //     ans3 += zero;
        // }

        // if(i5 > s.length() - 2)
        // {
        //     ans3 += zero;
        // }

        if(i7 > s.length() - 2)
        {
            ans4 += zero;
        }

        if(i8 > s.length() - 2)
        {
            ans4 += zero;
        }


    }
  //  cout<<ans4<<endl;

    vector<long long> ans;
    ans.push_back(ans1);
    ans.push_back(ans2);
    ans.push_back(ans3);
    ans.push_back(ans4);

    sort(ans.begin() , ans.end());
    long long finAns= -1;

    for(long long i=0 ;i<ans.size() ; i++)
    {
        // cout<<ans[i]<<endl;
        if(ans[i] >= 0)
        {
            finAns =ans[i];
            break;
        }
    }

    cout<<finAns<<endl;

    return 0;
}