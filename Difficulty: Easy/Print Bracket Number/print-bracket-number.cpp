//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:

    vector<int> bracketNumbers(string str) {
        // Your code goes here
                stack<pair<char, int>> st;
        vector<int> ans;
        int maxi = 0;
        for(auto it: str){
            if(it == '('){
                maxi++;
                st.push({'(', maxi});
                ans.push_back(maxi);
            }
            else if(it == ')'){
                ans.push_back(st.top().second);
                st.pop();
            }
        }
        return ans;

    }
};

//{ Driver Code Starts.

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    string tc;
    getline(cin, tc);
    t = stoi(tc);
    while (t--) {
        string s;
        getline(cin, s);

        Solution ob;

        vector<int> ans = ob.bracketNumbers(s);

        for (auto i : ans)
            cout << i << " ";

        cout << "\n";
    }

    return 0;
}
// } Driver Code Ends