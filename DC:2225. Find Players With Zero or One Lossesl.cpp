#include<bits/stdc++.h>

class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {

        map<int,int>win_map;
        map<int,int>loss_map;
        vector<int>win;
        vector<int>loss;
        for(int i=0;i<matches.size();i++){
        win_map[matches[i][0]]++;
        loss_map[matches[i][1]]++;
        
        }

        for(auto it:win_map){
            if(loss_map.find(it.first)==loss_map.end()){
                win.push_back(it.first);
            }
        }

        for(auto it:loss_map){
            if(it.second==1){
                loss.push_back(it.first);
            }
        }

        return{win,loss};

        
    }
};
