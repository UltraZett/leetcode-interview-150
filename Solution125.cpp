//
// Created by pc on 2024/3/21.
//

#include "Solution125.h"

#include "iostream"

bool Solution125::isPalindrome(string s) {

    string ps;
    int index = 0;

    while (index<s.length()){
        if (isalpha(s[index])|| isdigit(s[index])){
            ps.push_back(tolower(s[index]));
        }
        index++;
    }


    if (ps.empty() || ps.length()==1){
        return true;
    }

    int fast_i = 0;
    int normal_i = ps.length() -1;

    while (fast_i <= normal_i){
        if (ps[fast_i] != ps[normal_i]){
            return false;
        }
        fast_i++;
        normal_i--;
    }


    return true;
}
