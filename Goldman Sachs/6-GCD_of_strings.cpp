#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    
    int gcd(int p, int q) 
    {
        if (q == 0)
        {
            return p;
        }
        else
        {
            return gcd(q, p % q);    
        } 
    }    
    string gcdOfStrings(string str1, string str2) {
        
    if ((str1+str2)!=(str2+str1)) {
        return "";
    }

    
    int gcdVal = gcd(str1.length() , str2.length());
    return str2.substr(0, gcdVal);
    }
};

int main()
{
    string str1,str2;

    cin>>str1>>str2;

    Solution obj;
    cout<<obj.gcdOfStrings(str1,str2);

    return 0;
}