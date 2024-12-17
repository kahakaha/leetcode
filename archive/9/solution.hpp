#include "leetcode.hpp"
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        } else if (x < 10) {
            return true;
        }

        int dig = 0;
        int tmp = x;
        long long int high = 1;
        while (tmp != 0)
        {
            tmp /= 10;
            high *= 10;
            dig++;
        }
        high /= 10;
        printf("digit: %d, high: %lld\n", dig, high);

        int mid = dig / 2;
        for (int i = 0; i < mid; i++) {
            if (x / high != x % 10) {
                return false;
            }

            x = x % high;
            x = x / 10;
            high /= 100;
        }

        return true;
    }


private:

};