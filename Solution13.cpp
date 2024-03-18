//
// Created by pc on 2024/3/16.
//

#include "Solution13.h"

#include "iostream"


using namespace std;

int Solution13::romanToInt(string s) {


    int result = symbolValues[s[0]];

    for (int i = 1; i < s.size(); ++i) {
        int pre = symbolValues[s[i-1]];
        int cur = symbolValues[s[i]];

        if (pre < cur){
            result = result + cur - 2*pre;
        } else{
            result+=cur;
        };

    }


    return result;
}
