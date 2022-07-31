//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    vector<int> Reverse(stack<int> s){
        vector<int>v;
        
        
        while(s.size()>0)
        {
            v.push_back(s.top());
            s.pop();
        }
        return v;
    }
    void rev(stack<int>&s)
    {
        if(s.size()==1)
        {
            return ;
        }
        int temp=s.top();
        s.pop();
        Reverse(s);insert(s,temp);
    }
    void insert(stack<int>&s,int n)
    {
        if(s.size()==0)
        {
            s.push(n);
            return;
        }
        int temp=s.top();
        s.pop();
        insert(s,n);
        s.push(temp);
    }
};

//{ Driver Code Starts.


int main(){
    int T;
    cin>>T;
    while(T--){
        int N;
        cin>>N;
        stack<int> St;
        for(int i=0;i<N;i++){
            int x;
            cin>>x;
            St.push(x);
        }
        Solution ob;
        vector<int> ans=ob.Reverse(St);
        for(int i=0;i<N;i++){
            cout<<ans[i];
            if(i!=N-1) cout<<" ";
        }
        cout<<endl;
    }
}
// } Driver Code Ends
