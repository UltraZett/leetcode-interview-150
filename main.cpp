#include <iostream>
//#include "Solution13.h"
//#include "Solution12.h"
//#include "Solution58.h"
//#include "Solution14.h"
//#include "Solution151.h"
//#include "Solution28.h"
//#include "Solution125.h"
//#include "Solution392.h"
//#include "Solution167.h"
#include "Solution15.h"
#include "vector"

int main() {
//    Solution13* s = new Solution13();
//    cout<< s->romanToInt("MCMXCIV");
//    Solution12* s = new Solution12();
//    cout<< s->intToRoman(1994);
//    Solution58* s = new Solution58();
//
//    cout<< s->lengthOfLastWord("luffy is still joyboy");

//    Solution151* s = new Solution151();
//    cout<< s->reverseWords("  hello world  ")<<endl;

//    Solution28* s = new Solution28();
//    cout<< s->strStr("mississippi","issipi")<<endl;

//    Solution125* s = new Solution125();
//    cout<< s->isPalindrome("0P")<<endl;

    Solution15* s = new Solution15();
    vector<int> v = {-1,0,1,2,-1,-4};
    s->threeSum(v);

    return 0;
}
