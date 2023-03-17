//Time: 2023/3/17
//Author: Allan

#include "func.h"

void swap(int &a, int &b){
    a=a^b; b=a^b; a=a^b;
}