class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int c = nums[0] + nums[1] + nums[2];
        for(int i = 0;i<n;i++){
            int p1 = i+1;
            int p2 = n-1;
            while(p1<p2){
                int temp = (nums[p1])+(nums[p2])+(nums[i]);
                if(abs(target - temp) < abs(target-c)){
                    c = temp;
                }
                if(temp == target) return target;
                else if(temp < target) p1++;
                else
                p2--;
            }
        }
        return c;
    }
};