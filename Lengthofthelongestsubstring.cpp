// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    int longestUniqueSubsttr(string s){
        //code
         int i=0,j=0,mx=-1;
        int n=s.length();
        unordered_map<char,int>m;
        while(j<n)
        {
            m[s[j]]++;
            //cout<<s[j]<<endl;
            if(m.size()==j-i+1)
            {
                
                mx=max(mx,j-i+1);
                //cout<<mx<<endl;
                j++;
            }
            else if(m.size()<j-i+1)
            {
                while(m.size()<j-i+1)
                {
                    m[s[i]]--;
                    if(m[s[i]]==0){
                        m.erase(s[i]);
                    }i++;
                }
                j++;
            }
        }
        return mx;
    }
};

// { Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string str;
		cin>>str;
		Solution ob;
		cout<<ob.longestUniqueSubsttr(str)<<endl;
	}
	return 0;
}  // } Driver Code Ends
