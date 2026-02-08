class Solution {
public:
    string countAndSay(int n) {
        string s = "1";

        for(int i = 1; i < n;i++){
            int count = 1;
            string temp = "";
            for(int c = 1; c < s.size(); c++){
                if(s[c] == s[c-1]){
                    count++;
                }
                else{
                    temp += to_string(count) + s[c-1];
                    count =1;
                }
            }
            temp += to_string(count) + s.back();
            s = temp;
        }
        return s;
    }
};