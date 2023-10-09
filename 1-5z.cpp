#include <iostream>
#include "middle.h"
using namespace std;


void itc_num_print(int number){
    cout << number;
}


int itc_len_num(long long number){
    int sum = 0;
    if (number < 0){
        number = number * (-1);
        while(number > 0){
            sum += 1;
            number /= 10;
        }
    return sum;
    }
    while(number > 0){
        sum += 1;
        number /= 10;
    }
    return sum;
}


int itc_sum_num(long long number){
    int sum = 0;
    if(number < 0){
        number *= -1;
        while(number){
        sum += number % 10;
        number /= 10;
        }
    return sum;
    }
    while(number){
        sum += number % 10;
        number /= 10;
    }
    return sum;
}


long long itc_multi_num(long long number){
    int n = 1;
    if (number > 0){
        while(number){
            n = n * (number % 10);
            number /= 10;
        }
    return n;
    }
    else{
        number *= -1;
        while(number){
            n = n * (number % 10);
            number /= 10;
        }
    return n;
    }
}


int itc_max_num(long long number){
    int max1;
    max1 = 0;
    if (number == 0){
        return 0;
    }
    else if (number < 0){
        number = number * (-1);
        while(number){
            if (number % 10 > max1) {
                max1 = number % 10;
            }
        number /= 10;
        }
        return max1;
    }
    else{
    while(number){
        if (number % 10 > max1) {
            max1 = number % 10;
        }
        number /= 10;
    }
    return max1;
    }
}
