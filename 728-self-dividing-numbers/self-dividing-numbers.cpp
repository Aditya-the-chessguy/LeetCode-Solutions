class Solution {
public:
    bool divd(int n){
        
        int m=n;
        while(n){
            int dig=n%10;
            if(dig==0 || m%dig!=0){
                return false;
            }
            n=int(n/10);
        }
        return true;
    }
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        for(int i=left;i<=right;i++){
            if(divd(i)){
                ans.push_back(i);
            }
        }
        return ans;
    }
};