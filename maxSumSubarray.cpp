// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution{   
public:
    long maximumSumSubarray(int K, vector<int> &a , int N){
        // code here 
        long long int i=0,j=0,sum=0,max=-9999;
        
        while(j<N)
        {
           sum+=a[j];
            if(j-i+1<K)
            {
                j++;
            }
            else if(j-i+1==K)
            {
                if(max<sum)
                {
                    max=sum;
                }
                sum-=a[i];
                i++;
                j++;
            }
            
        }
        return max;
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N,K;
        cin >> N >> K;;
        vector<int>Arr;
        for(int i=0;i<N;++i){
            int x;
            cin>>x;
            Arr.push_back(x);
        }
        Solution ob;
        cout << ob.maximumSumSubarray(K,Arr,N) << endl;
    }
    return 0; 
}   // } Driver Code Ends
