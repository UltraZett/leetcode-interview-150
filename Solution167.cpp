//
// Created by pc on 2024/3/22.
//

#include "Solution167.h"

vector<int> Solution167::twoSum(vector<int> &numbers, int target) {
    int index_1 = 1;
    int index_2 = numbers.size() -1;

    vector<int> res(2);

    while (index_1 < index_2){
        if (target - numbers[index_1] > numbers[index_2]){
            index_1++;
        } else if (target - numbers[index_1] < numbers[index_2]){
            index_2--;
        } else{
            res[0] =index_1;
            res[1] =index_2;
            break;
        }
    }


    return res;
}

