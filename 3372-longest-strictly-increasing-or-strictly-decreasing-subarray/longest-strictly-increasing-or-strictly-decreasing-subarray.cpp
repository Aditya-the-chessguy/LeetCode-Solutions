class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int n=nums.size();
        int cntD=1,cntI=1;
        int ansD=1,ansI=1;

        for(int i=1;i<n;i++){
            if(nums[i]>nums[i-1]){
                ++cntI;
            }
            else{
                cntI=1;
            }
            ansI=max(ansI,cntI);
        }

        for(int i=1;i<n;i++){
            if(nums[i]<nums[i-1]){
                ++cntD;
            }
            else{
                cntD=1;
            }
            ansD=max(ansD,cntD);
        }

        return max(ansD,ansI);
    }
};