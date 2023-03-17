//Time: 2023/3/17
//Author: Allan

#ifndef LINEAR_LIST_SQLIST_H
#define LINEAR_LIST_SQLIST_H

#endif //LINEAR_LIST_SQLIST_H


#include "func.h"

#define MAXSIZE 50

typedef int ElemType_SqList;
typedef struct{
    ElemType_SqList data[MAXSIZE];
    int length;
}SqList;

//测试函数
void test_sqlist(void);
//打印顺序表
void SqListPrint(SqList SL);
