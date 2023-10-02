#include <iostream>
#include "middle.h"
using namespace std;

int itc_reverse_number(long long number){
    int digit, rebmun, sum = 0;
    rebmun = 0;
    if (number < 0){
        number *= -1;
        while(number){
            digit = number % 10;
            rebmun = rebmun * 10 + digit;
            number /= 10;
        }
    return rebmun;
    }

    while(number){
        digit = number % 10;
        rebmun = rebmun * 10 + digit;
        number /= 10;
    }
return rebmun;
}
