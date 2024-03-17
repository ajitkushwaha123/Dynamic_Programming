#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--)
	{
	    int x,y;
	    cin>>x>>y;

        // if(x > y)swap(x,y);
        // if(y%x == 0)
        // {
        //     cout<<x<<endl;
        // }
        // else
        // {
        //     cout<<y%x<<endl;
        // }

//cout<<x<<" "<<y<<endl;
	    // while(x != 0)
	    // {
	    //     if(x > y)
	    //     {
	    //         swap(x,y);
        //         cout<<x<<" "<<y<<endl;
	    //     }
	    //     else
	    //     { 
	    //         x = y - x ;
	    //         y = x;
	            
	    //     }
	    // }

        while(x != 0)
        {
            if(x > y)
            {
                swap(x,y);
            }

            int temp = x;
            
            if(x <= y)
            {
                x = y-x;
                y = temp;
            }
        }
	    
	    cout<<y<<endl;
	}

}