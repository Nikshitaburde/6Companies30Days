#include <bits/stdc++.h>

using namespace std;

#define ull unsigned long long

class Solution{
public:	
	
	ull getNthUglyNo(int n) {
	
	    
	    long dp[n+1];
	    dp[1] = 1;
        
        int p2 = 1;
        int p3 = 1;
        int p5 = 1;
        
        for(int i=2; i <=n ; i++){
            long f1 = 2 * dp[p2];
            long f2 = 3 * dp[p3];
            long f3 = 5 * dp[p5];
            
            long minim = min(f1,min(f2,f3));
            dp[i] = minim;
            
            if(minim == f1){
                p2++;
            }
            if(minim == f2){
                p3++;
            }
            if(minim == f3){
                p5++;
            }
            
        }
        
        return dp[n];
	    
	    
	}
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.getNthUglyNo(n);
        cout << ans << "\n";
    }
    return 0;
}