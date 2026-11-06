class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int ans=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(i!=nums[i]){
                ans=i;
                break;
            }
            else if(i==nums.size()-1){
                ans=i+1;
            }
        }
        return ans;
    }
};