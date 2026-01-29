class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        quickSort(nums,0,n-1);
        for (auto it : nums) {
    cout << it << " ";
}

        vector<vector<int>> ans;
        for(int i = 0; i < n-2;i++){
            if(i != 0 && nums[i] == nums[i-1]) continue;
            int p1 = i+1;
            int p2 =n-1;
            while(p1 < p2 ){
                if(nums[p1] + nums[p2] == 0-nums[i]){
                    vector<int> temp = {nums[i],nums[p1],nums[p2]};
                    ans.push_back(temp);
                    p1++;
                    p2--;
                    while(p1 < n && nums[p1] == nums[p1-1]){
                        p1++;
                    }
                    while(p2 >= 0 && nums[p2] == nums[p2+1]){
                        p2--;
                    }
                }
                else if(nums[p1] + nums[p2] > 0-nums[i]){
                    p2--;
                }
                else{
                    p1++;
                }
            }
        }
        return ans;
    }

    void quickSort(vector<int>& arr,int begin,int end){
        if (begin < end){
            int pivotIndex = partition(arr,begin,end);
            quickSort(arr,begin,pivotIndex-1);
            quickSort(arr,pivotIndex+1,end);
        }
        
    }

    int partition(vector<int>& arr,int begin,int end){
        int pivot = arr[end];
        int i = begin-1;

        for(int j = begin;j < end;j++){
            if(arr[j] < pivot){
                i++;
                swap(arr[i],arr[j]);
            }
        }
        swap(arr[i+1],arr[end]);
        return i+1;
    }
};