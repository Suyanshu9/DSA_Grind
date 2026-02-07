class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        string p = "";
        for(auto c : paragraph){
            if(isalpha(c)){
                p += c;
            }
            else{
                if(!p.empty() && p.back() != ' ')
                p+= ' ';
            }
        }
        transform(p.begin(),p.end(),p.begin(), ::tolower);
        if(p.back() != ' ')
        p+= ' ';
        cout<< p << endl;
        unordered_map<string,int> f;
        string word = "";
        for(auto c : p){
            if(c == ' '){
                if(check(word,banned))
                f[word]++;
                word = "";
            }
            else{
                word += c;
            }
        }
        // for(auto it : f){
        //     cout << it.first << "->" << it.second << endl;
        // }
        int max = INT_MIN;
        for(auto it : f){
            if(it.second > max){
                word = it.first;
                max = it.second;
            }
        }
        return word;
    }

    bool check(string word, vector<string> banned){
        for(auto w : banned){
            if(w == word){
                return false;
            }
        }
        return true;
    }
};