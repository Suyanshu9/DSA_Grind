class Solution {
public:
    bool backspaceCompare(string s, string t) {
       int s1 = s.length()-1;
       int t1 = t.length()-1;
       while(s1 >= 0 || t1>= 0){
        s1 = backspace(s,s1);
        t1 = backspace(t,t1);

        if(s1 < 0 && t1 < 0){
            return true;
        }
        if(s1 < 0 || t1 <0){
            return false;
        }
        else if(s[s1] != t[t1]){
            return false;
        }

        s1 --;
        t1--;
       }
       return true;
    }

    int backspace(string str, int end){
        int backCount = 0;

        while(end >=0){
            if(str[end] == '#'){
                backCount++;
            }
            else if(backCount > 0){
                backCount--;
            }
            else{
                break;
            }
            end--;
        }
        return end;
    }
};