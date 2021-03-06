#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution{
  public:
    string nextPalin(string s) { 
        //complete the function here
        int n = s.length();
       
        if(n<=3)
            return "-1";
            
        string half = s.substr(0,n/2);
        if( next_permutation( half.begin() , half.end() ) )
        {
            string ans=half;
            if(n&1)
            {
                ans+=s[n/2];
            }
            reverse(half.begin() , half.end());
            ans+=half;
            return ans;
        }
        return "-1";
        
    }
};

// { Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        Solution obj;
        cout << obj.nextPalin(s) << endl;
    }
    return 0;
}  //
