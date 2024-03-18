//
// Created by pc on 2024/3/18.
//

#include "Solution58.h"

int Solution58::lengthOfLastWord(string s) {
    int index = s.size() - 1;

    while (s[index] == ' '){
        index--;
    }

    int wordLength = 0;

    while (index>=0 &&s[index] != ' '){
        wordLength++;
        index--;
    }

    return wordLength;
}
