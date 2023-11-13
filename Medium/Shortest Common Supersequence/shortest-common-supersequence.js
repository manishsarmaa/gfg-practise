//{ Driver Code Starts
//Initial Template for javascript
'use strict';

process.stdin.resume();
process.stdin.setEncoding('utf-8');

let inputString = '';
let currentLine = 0;

process.stdin.on('data', inputStdin => {
    inputString += inputStdin;
});

process.stdin.on('end', _ => {
    inputString = inputString.trim().split('\n').map(string => {
        return string.trim();
    });
    
    main();    
});

function readLine() {
    return inputString[currentLine++];
}

function main() {
    let t = parseInt(readLine());
    for(let i=0;i<t;i++)
    {
        let input_line = readLine().split(' ');
        let X = input_line[0];
        
        let Y = input_line[1];
     
        let m = X.length;
        let n = Y.length;
        
        let obj = new Solution();
        let ans = obj.shortestCommonSupersequence(X, Y, m, n);
        if(ans==-0)
        ans=0;
        console.log(ans);
    }
}

// } Driver Code Ends


//User function Template for javascript

/**
 * @param {string} X
 * @param {string} Y
 * @param {number} m
 * @param {number} n
 * @returns {number}
 */
 
 
class Solution
{
    //Function to find length of shortest common supersequence of two strings.
    shortestCommonSupersequence(X, Y, m, n)
    {
        // code here
            const dp = new Array(m + 1).fill(null).map(() => new Array(n + 1).fill(0));

    // Fill the dp array using bottom-up dynamic programming.
    for (let i = 1; i <= m; i++) {
      for (let j = 1; j <= n; j++) {
        if (X[i - 1] === Y[j - 1]) {
          dp[i][j] = dp[i - 1][j - 1] + 1;
        } else {
          dp[i][j] = Math.max(dp[i - 1][j], dp[i][j - 1]);
        }
      }
    }

    // Length of the shortest common supersequence is the sum of lengths
    // of X and Y minus the length of their longest common subsequence.
    return m + n - dp[m][n];

    }
}