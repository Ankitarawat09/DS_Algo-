class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int,int>map;
        for(int &num: nums){
            map[num]++;
        }

        int result=0;
        for(auto &it:map){
            int count=it.second;
            if(count==1){
                return -1;
            }
            result+=ceil((double)count/3);
        }
        return result;
        
    }
};
//Time Complexity: O(n)
//Space Complexity: O(n)
