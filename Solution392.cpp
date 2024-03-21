//
// Created by pc on 2024/3/21.
//

#include "Solution392.h"

bool Solution392::isSubsequence(string s, string t) {

    int sl = s.length();
    int tl = t.length();

    if (tl<sl){
        return false;
    }

    if (tl==sl){
        return s.compare(t) == 0;
    }

    int s_i = 0;
    int t_i = 0;


    while (s_i<sl&&t_i<tl){
        if (s[s_i] == t[t_i]){
            s_i++;
        }
        t_i++;
    }

    if (s_i==sl){
        return true;
    }


    return false;
}
