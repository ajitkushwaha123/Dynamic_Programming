#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin>>n;

    int count = 0;

    for(int i =1 ; i<= n ; i++)
    {
        if(n%5 == 0 && n%10 != 0)
        {
            count++;
        }

        if(n%10 == 0)
        {

        }
    }
    return 0;
}