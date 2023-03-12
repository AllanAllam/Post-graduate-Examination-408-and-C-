#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//结构体
//使用C++的引用，注意提交时把代码选为C++；
// 在主函数定义字符指针 char *p,然后在子函数内malloc申请空间（大小为100个字节），
// 通过fgets读取字符串，然后在主函数中进行输出；
// 要求子函数使用C++的引用，注意在C++中从标准输入读取字符串，需要使用fgets(p,100,stdin)

void mygets(char *&p) //C++的引用
{
    p=(char*)malloc(100);
    fgets(p,100,stdin); //换行会被采集
}

char* mygets2(void)
{
    char *pr;
    pr=(char*)malloc(100);
    strcpy(pr, "hello world!");
    return pr;
}

int main() {
//    char *p;
//    mygets(p);
//    puts(p);

    char *pr;
    pr=mygets2();
    puts(pr);

    return 0;
}
