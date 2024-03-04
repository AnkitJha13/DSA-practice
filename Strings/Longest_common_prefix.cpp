class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        if(n==0)  return "";

        string ans = "";
        sort(strs.begin(),strs.end());
        
       
        string a = strs[0];
        string b = strs[n-1];

        for(int i = 0;i<a.size();i++){
           if(a[i] == b[i]){
               ans += a[i];
           }
           else{
               break;
           }
        }
         if(ans.empty()){  // case when no letters are matching 
            return "";
        }
        return ans;
    }
};




Example 1:

Input: strs = ["flower","flow","flight"]
Output: "fl"
Example 2:

Input: strs = ["dog","racecar","car"]
Output: ""
Explanation: There is no common prefix among the input strings.
