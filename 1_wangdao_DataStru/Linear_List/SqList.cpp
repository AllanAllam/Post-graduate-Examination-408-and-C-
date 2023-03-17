//Time: 2023/3/17
//Author: Allan


#include "sqlist.h"

void test_sqlist(void){
    SqList SL;
    SL.length=3;
    SL.data[0]=1;
    SL.data[1]=2;
    SL.data[2]=3;

    SqListPrint(SL);
}

void SqListPrint(SqList SL){
    for(int i=0; i<SL.length; i++){
        printf("%d ", SL.data[i]);
    }
    printf("\n");
}