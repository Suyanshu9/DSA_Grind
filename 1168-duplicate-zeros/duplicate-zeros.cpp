class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int n = arr.size();
        // for (int i = 0; i< n;i++){
        //     if(arr[i] == 0){
        //         int temp ;
        //         if(i != n-1) temp = arr[i+1];
        //         else break;
        //         arr[i+1] = 0;
        //         for(int j = i+2 ; j<n; j++){
        //             int temp2 = arr[j];
        //             arr[j] = temp;
        //             temp = temp2;
        //         }
        //         i ++;
        //     }
        // }
        int j = 0;
        vector<int> ans(n);
        for(int i = 0; i< n;i++){
            if (j >= n) break;
            if(arr[i] == 0){
                ans[j] = 0;
                if(j+1 < n)
                ans[j+1] = 0;
                j += 2;
            }
            else{
                ans[j] = arr[i];
                j++;
            }
        }
        arr = ans;
    }
};