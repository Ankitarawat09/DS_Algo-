class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int n=bank.size();
        
        int prevCount=0;
        int answer=0;

        for(int i=0;i<n;i++){
            int currCount=0;
            for(char &ch:bank[i]){
                if(ch=='1'){
                    currCount++;

                }
            }
            answer+=(currCount*prevCount);
            if(currCount!=0){
                prevCount=currCount;
            }
        }

        return answer;
        
    }
};
//Time Complexity: O(m*n)
//Space Complexity: O(1)
