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


template <typename T>
int readVector(vector<T>& v) {
    string line;
    getline(cin, line);
    // 去除 []
    line = line.substr(1, line.length() - 2);

    stringstream ss(line);
    string itemString;
    int cnt = 0;
    // 使用 "," 分隔
    while (getline(ss, itemString, ','))
    {
        // 去除空格和双引号
        itemString.erase(0, itemString.find_first_not_of(" \t\""));
        itemString.erase(itemString.find_last_not_of(" \t\"")+1);

        stringstream itemStream(itemString);
        T value;
        // string 转换为类型T
        itemStream >> value;
        v.push_back(value);
        cnt++;
    }

    return cnt;
}


template <typename T>
int readVector(std::vector<T>& v, std::string i) {
    // 去除 []
    i = i.substr(1, i.length() - 2);

    stringstream ss(i);
    string itemString;
    int cnt = 0;
    // 使用 "," 分隔
    while (getline(ss, itemString, ','))
    {
        // 去除空格和双引号
        itemString.erase(0, itemString.find_first_not_of(" \t\""));
        itemString.erase(itemString.find_last_not_of(" \t\"")+1);

        stringstream itemStream(itemString);
        T value;
        // string 转换为类型T
        itemStream >> value;
        v.push_back(value);
        cnt++;
    }

    return cnt;
}