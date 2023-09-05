class Solution {
public:
    void swap(vector<int>& nums, int index1, int index2) {
        int temp = nums.at(index1);
        nums.at(index1) = nums.at(index2);
        nums.at(index2) = temp;
    }

    int removeElement(vector<int>& nums, int val) {
        int count = nums.size();
        int l_pnt = 0;
        int r_pnt = nums.size() - 1;
        while (l_pnt <= r_pnt) {
            if (nums.at(l_pnt) != val) {
                l_pnt++;
            }
            else if (nums.at(r_pnt) == val) {
                nums.at(r_pnt) = 0;
                r_pnt--;
                count--;
            }
            else {
                nums.at(l_pnt) = 0;
                swap(nums, l_pnt, r_pnt);
                l_pnt++;
                r_pnt--;
                count--;
            }
        }
        return count;
    }
};
