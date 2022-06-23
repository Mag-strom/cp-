// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class Solution{
    public:
    int lenOfLongSubarr(int A[],  int N, int K) 
    { 
        // Complete the function
        int i=0,j=0;
        int sum=0,mx=0;
        unordered_map<int,int>m;
        m[0]=0;
        while(j<N)
        {
            sum+=A[j];
            //cout<<sum<<" "<<j<<endl;
           if(m.find(sum-K)!=m.end())
           {
               
               i=m[sum-K];//cout<<sum<<" % "<<i<<" % "<<j<<" % "<<endl;
               mx=max(mx,j-i+1);
           }
           if(m.find(sum)==m.end()){
               m[sum]=j+1;
               
           }
           j++;
            //cout<<sum<<" "<<sum-K<<" " <<m[sum]<<" "<<j<<endl;
            
        }
        return mx;
    } 

};

// { Driver Code Starts.

int main() {
	//code
	
	int t;cin>>t;
	while(t--)
	{
	    int n, k;
	    cin>> n >> k;
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution ob;
	   cout << ob.lenOfLongSubarr(a, n , k)<< endl;
	    
	}
	
	return 0;
}  // } Driver Code Ends
