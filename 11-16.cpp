#include <iostream>
#include "middle.h"
using namespace std;
int itc_second_max_num(long long number){
    int max1 = -1, max2 = -1;
    if (number < 0){
        number = number * (-1);
        while (number) {
        int digit;
        digit = number % 10;
        if (digit > max1){
            max2 = max1;
            max1 = digit;
        }
        else if (digit > max2 && digit < max1){
            max2 = digit;
        }
    number /= 10;
        }
    }
    if (number < 10 && number < -10) {
        return -1;
    }
    while (number) {
        int digit;
        digit = number % 10;
        if (digit > max1){
            max2 = max1;
            max1 = digit;
        }
        else if (digit > max2 && digit < max1){
            max2 = digit;
        }
    number /= 10;
    }
return max2;
}


int itc_second_simple_max_num(long long number){
    int max1 = -1, max2 = -1;
    if(number < 0){
        number = number * (-1);
        while (number > 0) {
        int digit;
        digit = number % 10;
        if(digit > max1){
            max2 = max1;
            max1 = digit;
        }
        else if(digit > max2 && digit < max1){
            max2 = digit;
        }
        number /= 10;
        }
    }
    if (number < 10 && number < -10){
        return -1;
    }
    while (number > 0) {
        int digit;
        digit = number % 10;
        if(digit > max1){
            max2 = max1;
            max1 = digit;
        }
        else if(digit > max2 && digit < max1){
            max2 = digit;
        }
        number /= 10;
        }
    if (max1 == max2){
        return -1;
    }
    return max2;
}


long long itc_bin_num(long long number){
    long long bin = 0, des = 1;
    if(number < 0){
        return -1;
    }
    while(number){
        bin = bin + (number % 2) * des;
        des *= 10;
        number /= 2;
    }
    return bin;
}


long long itc_oct_num(long long number) {
    long long oct = 0;
    int step = 0;
    if(number < 0){
        return -1;
    }
    if (number == 0) {
        return 0;
    }
    while (number > 0) {
        oct += (number % 8) * itc_pow(10, step);
        number /= 8;
        step++;
    }
    return oct;
}


int itc_rev_bin_num(long long number) {
    int dec = 0;
    int step = 0;
    if(number < 0){
        return -1;
    }
    while (number > 0) {
        int digit = number % 10;
        dec += digit * itc_pow(2, step);
        step++;
        number /= 10;
    }

    return dec;
}


int itc_rev_oct_num(long long number) {
    int dec = 0;
    int step = 0;
    if(number < 0){
        return -1;
    }
    while (number > 0) {
        int digit = number % 10;
        dec += digit * itc_pow(8, step);
        step++;
        number /= 10;
    }

    return dec;
}





