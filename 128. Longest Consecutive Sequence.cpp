//better

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        int n=nums.size();
        int count=0;
        int longest;
        if(n>0){
   longest=1;
        }
        else if(n==0){
                longest=0;
        }
        int lastsmaller=INT_MIN;
        
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            if(nums[i]-1==lastsmaller){
                count+=1;
                lastsmaller=nums[i];
            }

            else if
            (lastsmaller!=nums[i]){
                count=1;
                lastsmaller=nums[i];
            }
            longest=max(longest,count);

        }
        return longest;
    }
};
