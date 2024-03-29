#include <string>
using namespace std;

class Solution {
public:
    string largestOddNumber(string num) {
        int index = -1;
        for (int i = num.length() - 1; i >= 0; i--) {
            int digit = num[i] - '0';
            if (digit % 2 != 0) {
                index = i;
                break;
            }
        }
        
        return index == -1 ? "" : num.substr(0, index + 1);
    }
};
