#include <iostream>
using namespace std;

int main()
{
    string s = "aABa";
    for(int i =0; i<s.length() ; i++)
        {
            if(int(s[i]) >= 65 && int(s[i]) <= 90)
            {
                s[i] = int(s[i] + 32);
            }
        }

        cout<<s<<endl;
    return 0;
}