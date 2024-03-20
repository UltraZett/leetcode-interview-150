//
// Created by pc on 2024/3/20.
//

#include "Solution68.h"

vector<string> Solution68::fullJustify(vector<string> &words, int maxWidth) {

    vector<string> result;

    int index_words = 0;

    while (index_words < words.size()) {
        string line;
        int cnw = 0;
        int csize = 0;
        do {
            csize = csize + words[index_words].size();
            cnw++;
            index_words++;
        } while (index_words<words.size()&&csize + (cnw - 1) < maxWidth);

        if (csize + (cnw - 1) == maxWidth) {
            for (int i = index_words - cnw; i <= index_words; ++i) {
                line.append(words[i]).append(" ");
            }
            result.push_back(line.substr(0, line.size() - 1));
            continue;
        } else if (csize + (cnw - 1) > maxWidth) {
            // 大于减一，
            csize = csize - words[index_words].size();
            index_words--;
            cnw--;
        }

        // 小于补充,左侧空格多余右侧
        if (cnw - 1 == 0){
            line.append(words[index_words - cnw]);
            int length = line.size();
            while (length <= maxWidth){
                line.push_back(' ');
                length++;
            }
        } else{
            // 单词间补充几个空格
            int a = (maxWidth - csize) / (cnw - 1);
            // 前几个多一个
            int b = (maxWidth - csize) - (a * (cnw - 1));

            for (int i = index_words - cnw; i <= index_words; ++i) {
                line.append(words[i]);

                for (int j = 0; j < a; ++j) {
                    line.append(" ");
                }

                if (b > 0) {
                    line.append(" ");
                    b--;
                }
            }
            line.erase(0, line.find_first_not_of(' '));
            line.erase(line.find_last_not_of(' ') + 1);
            result.push_back(line);
        }

    }

    // 处理最后一行
    string l = result.back();

    string nl;
    int index = 0;
    while (index < l.size()) {

        while (index < l.size() && l[index] == ' ') {
            index++;
        }

        while (index < l.size() && l[index] != ' ') {
            nl.push_back(l[index]);
            index++;
        }
        nl.push_back(' ');
        index++;
    }

    for (int i = nl.size(); i <= maxWidth; ++i) {
        nl.push_back(' ');
    }

    result.push_back(nl);

    return result;
}
