// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
/*You are required to complete this method*/

// arr[] : the input array containing 0s and 1s
// N : size of the input array

// return the maximum length of the subarray
// with equal 0s and 1s
class Solution{
  public:
    int maxLen(int arr[], int N)
    {
        // Your code here
        int i=0,j=0,mx=0,sum=0;
        unordered_map<int,int>m;
        m[sum]=-1;
        while(j<N)
        {
            if(arr[j]==0)
            {
                sum+=-1;
            }
            else {
                sum+=1;
            }
            if(m.find(sum)!=m.end())
            {
                i=m[sum];
                mx=max(mx,j-i);
            }
            else{
                m[sum]=j;
            }
            j++;
        }
        return mx;
    }
};


// { Driver Code Starts.

int main()
{
    // your code goes here
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        Solution obj;
        cout << obj.maxLen(a, n) << endl;
    }
    return 0;
}  // } Driver Code Ends
