class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {

        map<int,int>hash;
        for(int i=0;i<arr.size();i++){
            hash[arr[i]]++;
        }

        unordered_set<int>freqset;
        for(auto[key,value]:hash){
            freqset.insert(value);
          }
            return freqset.size()==hash.size();    
    }
};
