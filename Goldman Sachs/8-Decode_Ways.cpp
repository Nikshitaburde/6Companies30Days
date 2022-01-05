#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
	public:
	    int bottom_up(string s,int M)
	    {
	        int n = s.length() ;
	        if(n == 0 || s[0]-'0' == 0)
	        return 0 ;
	        if(n==1)return 1 ;
	        int res = 0 ;
	        int p1=1 , p2=1 ;
	        for(int i =1 ; i< n ;i++)
	        {
	           int x = s[i]-'0' ;
	           int y = (s[i-1]-'0')*10+x ;
	           res = 0;
	           if(x>0 && x<=9)
	           res = (res + p1)%M ;
	           if(y >=10 && y<=26)
	           res = (res+p2)%M ;
	           p2 = p1 ;
	           p1 = res ;
	           
	        }
	        return res%M ;
	    }
		int CountWays(string str){
		    
		    int M = 1e9+7 ;
		    
		    return bottom_up(str,M) ;
		}

};

int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string str;
		cin >> str;
		Solution obj;
		int ans = obj.CountWays(str);
		cout << ans << "\n";
	}
	return 0;
}  