class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int n = arr.size();
        for (int i = 0; i< n;i++){
            if(arr[i] == 0){
                int temp ;
                if(i != n-1) temp = arr[i+1];
                else break;
                arr[i+1] = 0;
                for(int j = i+2 ; j<n; j++){
                    int temp2 = arr[j];
                    arr[j] = temp;
                    temp = temp2;
                }
                i ++;
            }
        }
    }
};