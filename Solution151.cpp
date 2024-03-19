//
// Created by pc on 2024/3/19.
//

#include "Solution151.h"


string Solution151::reverseWords(string s) {
    int index =s.size() -1;
    string result("");

    while (index >= 0){
        while (index >= 0&&s[index] == ' '){
            index--;
        }

        if (index >=0){
            int length = 0;
            while (index>=0&&s[index] != ' '){
                index--;
                length++;
            }
            result.append(s.substr(index + 1,length));
            result.append(" ");
        }


    }


    return result.erase(result.size() -1,1);
}
