#include <iostream>
#include "middle.h"
using namespace std;
double itc_pow(int num, int step){

    if (step < 0){
        return 1.0 / itc_pow(num, step * -1);
    }
    if (step == 0){
        return 1;
    }
    if (step % 2 == 0){
        return itc_pow(num * num, step / 2);
    }
    return num * itc_pow(num, step - 1);
}
