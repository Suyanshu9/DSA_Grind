class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int n = nums.size();
        int ans = 0;
        for(int i = 0; i<n; i++){
            if(nums[i] < k){
                ans++;
            }
            else{
                continue;
            }
            int product = nums[i];
            int p1 = i+1;
            int p2 = i+2;
            for(int j = i+1; j<n;j++){
                product *= nums[j];
                if(product < k){
                    ans++;
                }
                else{
                    break;
                }
            }
        }
        return ans;
    }
};