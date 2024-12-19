/**
 * 744. 寻找比目标字母大的最小字母
 * @tags 二分，查找插入点
 * @tips 当 nums[m] < target 时 l 移动，这意味着指针 l 在向大于等于 target 的元素靠近。同理，指针 r 始终在向小于等于 target 的元素靠近。
 */

#include "leetcode.hpp"
using namespace std;

class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int l = 0;
        int r = letters.size() - 1;

        while (l <= r) {
            int m = l + (r - l) / 2;

            if (letters[m] <= target) {
                l = m + 1;
            } else if (letters[m] > target) {
                r = m - 1;
            }
        }

        if (l >= letters.size()) {
            return letters[0];
        }

        return letters[l];
    }


private:

};