class Solution {
public:
    int romanToInt(string s) {
        map<char, int> dict { 
                               {'I', 1}, 
                               {'V', 5},
                               {'X', 10},
                               {'L', 50},
                               {'C', 100},
                               {'D', 500},
                               {'M', 1000}
                              } ;
        
        int p=0, ans=0;
        
        for(int i=s.length()-1; i>=0;i--)
        {
            if(dict[s[i]]>=p)
            {
                ans+=dict[s[i]];
            }
            else
            {
                ans-=dict[s[i]];
            }
            p=dict[s[i]];
        }
                             
        return ans;
    }
};

//Leetcode Link: https://leetcode.com/problems/roman-to-integer/
// Time Complexity: O(n)
