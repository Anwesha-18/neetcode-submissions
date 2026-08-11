class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map <int,int> freq;
        for(int i : nums){
            freq[i] ++ ;
        }
        vector<pair<int,int>> list(freq.begin(),freq.end());
        sort( list.begin(), list.end(), [](auto &a, auto &b){
            return (a.second > b.second) ;
        });
        vector <int> result;
        for(int i = 0; i<k; i++){
            result.push_back(list[i].first);
        }
        return result;
    }
};
