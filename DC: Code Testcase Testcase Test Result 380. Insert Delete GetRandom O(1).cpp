#include<bits/stdc++.h>

class RandomizedSet {
public:

vector<int>nums;
unordered_map<int,int>indexmap;

    RandomizedSet() {
        
    }
    
    bool insert(int val) {
      if(indexmap.find(val)!=indexmap.end()) return false;
      nums.push_back(val);
      indexmap[val]=nums.size()-1;
      return true;  
    }
    
    bool remove(int val) {
        if(indexmap.find(val)==indexmap.end()) return false;
        int last=nums.back();
        indexmap[last]=indexmap[val];//gives value index to last so it changes the index
    
    
        nums[indexmap[last]]=last;//need to move last element in actual array

        return true;
    }


    
    int getRandom() {
        return nums[rand()%nums.size()];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */
