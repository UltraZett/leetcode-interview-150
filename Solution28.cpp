//
// Created by pc on 2024/3/20.
//

#include "Solution28.h"

int Solution28::strStr(string haystack, string needle) {
    int h_size = haystack.size();
    int n_size = needle.size();
    if (h_size<n_size){
        return -1;
    }

    int index_h = 0;
    int index_n = 0;

    while (index_h < h_size){
        bool isSuccess = true;
        int temp = index_h;
        while (index_h < h_size&&index_n<n_size){
            if (haystack[index_h] == needle[index_n]){
                index_h++;
                index_n++;
            } else{
                isSuccess = false;
                break;
            }
        }

        if (isSuccess&&index_n==n_size){
            return temp;
        } else{
            index_h = temp;
            index_h++;
            index_n = 0;
        }

    }




    return -1;
}
