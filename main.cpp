#include <iostream>
//#include "Solution13.h"
//#include "Solution12.h"
//#include "Solution58.h"
#include "Solution14.h"


int main() {
//    Solution13* s = new Solution13();
//    cout<< s->romanToInt("MCMXCIV");
//    Solution12* s = new Solution12();
//    cout<< s->intToRoman(1994);
//    Solution58* s = new Solution58();
//
//    cout<< s->lengthOfLastWord("luffy is still joyboy");

    Solution14* s = new Solution14();
    vector<string> a{"ab", "a"};
    cout<< s->longestCommonPrefix(a)<<endl;

    return 0;
}
