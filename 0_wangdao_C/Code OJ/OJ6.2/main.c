#include <stdio.h>
#include <stdlib.h>
//指针
//输入一个整型数，然后申请对应大小空间内存，然后读取一个字符串，字符串的输入长度小于最初输入的整型数大小，
//最后输出输入的字符串即可（无需考虑输入的字符串过长，超过了内存大小）；
//注意去除输入数字时候的换行
int main() {
    int n=0;
    char *p;
    char c;
    scanf("%d", &n);
    p=(char*)malloc(n);
    scanf("%c", &c); //去除换行
    gets(p);
    puts(p);

    return 0;
}
