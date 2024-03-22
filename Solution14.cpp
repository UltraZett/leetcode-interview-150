//
// Created by pc on 2024/3/18.
//

#include "Solution14.h"

using namespace std;

string Solution14::longestCommonPrefix(vector<string> &strs) {
    string pre = strs[0];
    for (int i = 1; i < strs.size(); ++i) {
        string str = strs[i];
        if (str.size() < pre.size()){
            string temp = pre;
            pre = str;
            str = temp;
        }

        for (int j = 0; j < str.size(); ++j) {
            if (str[j]!=pre[j]){
                pre = pre.substr(0,j);
                break;
            }
        }

    }


    return pre;
}
