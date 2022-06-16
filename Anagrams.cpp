// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:
	int search(string pat, string txt) {
	    // code here
	    long long int k=pat.size();
	    unordered_map<char,int>m;
	    int b=0;
	    for(int i=0;i<k;i++)
	    {
	        m[pat[i]]++;
	    }
	    int i=0,j=0,count=m.size();
	    
	    while(j<txt.size())
	    {
	        if(j-i+1<k)
	        {
	            m[txt[j]]--;
	            if(m[txt[j]]==0)
	            count--; j++;
	        }
	       
	        else if(j-i+1==k)
	        {
	            m[txt[j]]--;
	            if(m[txt[j]]==0)
	            count--;
	            if(count==0)
	            {
	                b++;
	            }
	            if(m[txt[i]]==0)
	            {
	                count++;
	            }
	            m[txt[i]]++;
	            i++;
	            j++;
	            
	        }
	    }
	    return b;
	    
	}

};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends
