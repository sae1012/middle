#include <iostream>
#include "middle.h"
using namespace std;
int itc_min_num(long long number){
    int min1;
    min1 = 9;
    if(number < 0){
    number = number * (-1);
    while(number){
        if (min1 > number % 10){
            min1 = number % 10;
        }
        number /= 10;
    }
        return min1;
    }
    else if (number == 0){
        return 0;
    }
    else{
        while(number){
            if (min1 > number % 10){
                min1 = number % 10;
            }
            number /= 10;
        }
        return min1;
}
}


int itc_rev_num(long long number){
    int digit, rebmun, sum = 0;
    rebmun = 0;
    if(number < 0){
        number = number * (-1);
        while(number){
            digit = number % 10;
            rebmun = rebmun * 10 + digit;
            number /= 10;
        }
    }
    else{
        while(number){
            digit = number % 10;
            rebmun = rebmun * 10 + digit;
            number /= 10;
        }
    }
    while(rebmun){
        sum += 1;
        rebmun /= 10;
    }
    return sum;
}


int itc_null_count(long long number){
    int null = 0;
    if(number == 0){
        return 1;
    }
    if(number < 0){
        number *= -1;
        while(number > 0){
            if (number % 10 == 0){
                null += 1;
            }
            number /= 10;
        }
    return null;
    }
    else{
    while(number > 0){
        if (number % 10 == 0){
            null += 1;
        }
        number /= 10;
    }
    return null;
    }
}


bool itc_mirror_num(long long number){
    int  originalnumber, digit, rev = 0;
    originalnumber = number;
    while(number){
        digit = number % 10;
        rev = rev * 10 + digit;
        number /= 10;
    }
    if (originalnumber == rev || originalnumber == 0){
        cout << "TRUE" << endl;
    }
    else{
        cout << "FALSE" << endl;
    }
}


int itc_mirror_count(long long number){
    int n = 0;
    for (int i = 1; i <= number; i++){
        if(i == itc_reverse_number(i)){
            ++n;
        }
    }
    return n;
}
