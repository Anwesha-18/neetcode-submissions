class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded;
        for(string s : strs){
            encoded = encoded + to_string(s.length()) + "#" + s;
        }
        return encoded;
    }

    vector<string> decode(string s) {
     int i = 0;
     vector <string> words;
     while(i< s.length()){
        int j = i;
        while(s[j]!='#'){
            j++;
        }
        int length = stoi(s.substr(i,j-i));
        string word = s.substr(j+1,length);
        words.push_back(word);
        i = j + length + 1;
     } 
     return words;
    }
};
