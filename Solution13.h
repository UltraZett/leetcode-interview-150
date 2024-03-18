//
// Created by pc on 2024/3/16.
//

#ifndef LEETCODE_SOLUTION13_H
#define LEETCODE_SOLUTION13_H
#include "string"
#include "unordered_map"
using namespace std;

class Solution13 {
private:
    unordered_map<char, int> symbolValues = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000},
    };
public:
    int romanToInt(string s);
};


#endif //LEETCODE_SOLUTION13_H
