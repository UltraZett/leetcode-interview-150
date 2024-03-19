//
// Created by pc on 2024/3/19.
//

#include "Solution6.h"
#include "vector"

string Solution6::convert(string s, int numRows) {

    int n =s.length(), r = numRows;

    if (numRows == 1||r>=n){
        return s;
    }
    int t = 2*r -2;
    int c = (n+t -1) / t*(r-1);

    vector<string> mat(r,string(c,0));


    for (int i = 0,x=0,y=0; i < n; ++i) {
        mat[x][y] = s[i];
        if (i%t < r-1){
            ++x;
        } else{
            --x;
            ++y;
        }
    }
    string ans;
    for (auto &row: mat){
        for (auto &ch: row){
            if (ch){
                ans+=ch;
            }
        }
    }

    return ans;
}
