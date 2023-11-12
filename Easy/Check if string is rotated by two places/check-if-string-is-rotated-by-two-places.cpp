//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to check if a string can be obtained by rotating
    //another string by exactly 2 places.
    bool isRotated(string str1, string str2)
    {
        // Your code here
         string r1;
        for(int i=2;i<str1.size();i++){
            r1+=str1[i];
        }
        r1+=str1[0];
        r1+=str1[1];
        string r2;
         int n=str1.size();
         r2+=str1[n-2];
         r2+=str1[n-1];
        for(int i=0;i<str1.size()-2;i++){
            r2+=str1[i];
        }
        if(str2==r1 || str2==r2){
            return true;
        }
        return false;

    }

};


//{ Driver Code Starts.

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		string b;
		cin>>s>>b;
		Solution obj;
		cout<<obj.isRotated(s,b)<<endl;
	}
	return 0;
}

// } Driver Code Ends