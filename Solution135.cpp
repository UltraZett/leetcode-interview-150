//
// Created by pc on 2024/3/14.
//

#include "Solution135.h"
#include <vector>
#include <cmath>

int Solution135::candy(vector<int> &ratings) {
    int n = ratings.size();
    vector<int> left(n);
    left[0] = 1;

    // 计算左数组
    for (int i = 1; i < n; ++i) {
        if (ratings[i-1]<ratings[i]){
            left[i] = left[i-1] + 1;
        } else{
            left[i] = 1;
        }
    }

    int result = 0,right = 0;

    for (int i = n -1; i >=0 ; --i) {
        if (i <n-1&&ratings[i]>ratings[i+1]){
            right++;
        } else{
            right = 1;
        }

        result += max(left[i],right);

    }

    return result;
}