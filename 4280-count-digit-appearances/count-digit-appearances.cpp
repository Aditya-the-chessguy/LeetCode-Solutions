class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int dig) {
        int cnt=0;
        for(int i=0;i<nums.size();i++){
            if (nums[i] == 0 && dig == 0) cnt++;
            if (nums[i] == 0) continue;
            while(nums[i]>0){
                int digit;
                digit=nums[i]%10;
                if(digit==dig){
                    ++cnt;
                }
                nums[i]/=10;
            }
        }
        return cnt;
    }
};