#ifndef LEETCODE_HPP
#define LEETCODE_HPP

#include <stdio.h>
#include <stdlib.h>

#include <iostream>
#include <sstream>

#include <vector>
#include <string>
#include <unordered_map>


/**
 * @brief 将输入的字符串转换成一个任意类型的vector
 *
 * @tparam T vector中的类型
 * @param v 输出到的vector
 * @return 转换成功的个数
 *
 * 将一个形如["a","b","c"]的字符串转化成为一个vector
 */
template <typename T>
int readVector(std::vector<T>& v);

#endif // LEETCODE_HPP
