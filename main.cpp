#include "lib/leetcode.hpp"
#include "lib/solution.hpp"
using namespace std;

int main(void) {

    Solution solution;

    // 处理输入
    int x;
    cin >> x;

    // 调用函数
    auto res = solution.isPalindrome(x);

    // 输出结果
    cout << res << endl;

    return 0;
}
