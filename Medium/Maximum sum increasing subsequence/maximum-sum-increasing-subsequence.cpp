//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
		

	public:
	int maxSumIS(int arr[], int n)  
	{  
	    // Your code goes here
	        int ans=arr[0];
   //copy the arr to vector dp
    vector<int> dp(arr,arr+n);
 
    for(int i=1;i<n;i++){
        for(int j=i-1;j>=0;j--){
 
            //use the previous result to update the current position
            if(arr[j]<arr[i]){
                dp[i]=max(dp[i],dp[j]+arr[i]);
            }
        }
        ans=max(ans,dp[i]);
    }
    return ans;

	}  
};

//{ Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a[n];

        for(int i = 0; i < n; i++)
        	cin >> a[i];

      

	    Solution ob;
	    cout << ob.maxSumIS(a, n) << "\n";
	     
    }
    return 0;
}


// } Driver Code Ends