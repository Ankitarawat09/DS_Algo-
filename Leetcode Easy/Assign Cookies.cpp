class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(begin(g),end(g));
        sort(begin(s),end(s));

        int n=s.size();
        int m=g.size();

        int i=0; 
        int j=0;

        while(i<m && j<n){
            if (g[i]<=s[j]){
                i++;
            }
            j++;
        }
        return i;  
    }
};
//Time Complexity: O(mlogm + nlogn)
//Space Complexity: 0(1)           --Constant Space
