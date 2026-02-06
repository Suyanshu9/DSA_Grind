class Solution {
public:
    bool isPrefixString(string s, vector<string>& words) {
        int slen = s.size();
        string sen = "";
        
        for(auto c : words){
            if(sen.size() < slen){
                sen += c;
            }
            else{
                break;
            }
        }

        if(sen == s){
            return true;
        }
        else{
            return false;
        }

        // for(int i = 0; i< n;i++ ){
        //     while(auto c : words[i]){
        //         if(s[p1]== c){
        //             sen.push_back(c);
        //             p1++;
        //         }
        //         else{
        //             sen = "";
        //             break;
        //         }
        //         if(p1 >=n){
        //             return false;
        //         }
        //     }
        // }

    }
};