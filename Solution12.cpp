//
// Created by pc on 2024/3/17.
//

#include "Solution12.h"

using namespace std;

string Solution12::intToRoman(int num) {
    string result("");

    while (num>=1000){
        num = num -1000;
        result.append("M");
    }

    while (num>=900){
        num = num -900;
        result.append("CM");
    }

    while (num>=500){
        num = num -500;
        result.append("D");
    }

    while (num>=400){
        num = num -400;
        result.append("CD");
    }

    while (num>=100){
        num = num -100;
        result.append("C");
    }


    while (num>=90){
        num = num -90;
        result.append("XC");
    }


    while (num>=50){
        num = num -50;
        result.append("L");
    }

    while (num>=40){
        num = num -40;
        result.append("XL");
    }

    while (num>=10){
        num = num -10;
        result.append("X");
    }


    while (num>=9){
        num = num -9;
        result.append("IX");
    }
    while (num>=5){
        num = num -5;
        result.append("V");
    }
    while (num>=4){
        num = num -4;
        result.append("IV");
    }
    while (num>=1){
        num = num -1;
        result.append("I");
    }

    return result;
}
