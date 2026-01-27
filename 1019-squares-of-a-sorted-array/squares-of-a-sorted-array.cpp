class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        int i = 0;
        int j = n-1;

        for(int k = n-1; k >=0;k--){
            int a = pow(nums[i],2);
            int b = pow(nums[j],2);

            if(a>b){
                ans[k] = a;
                i++;
            }
            else{
                ans[k]=b;
                j--;
            }
        }
        return ans;
    }
};