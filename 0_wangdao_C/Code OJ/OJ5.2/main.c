#include <stdio.h>
#include <string.h>
//一维数组和字符数组
//读取一个字符串，字符串可能含有空格，将字符串逆转，
//原来的字符串与逆转后字符串相同，输出0，原字符串小于逆转后字符串输出-1，大于逆转后字符串输出1。
//例如输入 hello，逆转后的字符串为 olleh，因为hello 小于 olleh，所以输出-1

void strreverse(char a[]);
int main() {
    char arr[100]={0};
    char arr_backup[100]={0};//保证结束符存在

    gets(arr);
    strcpy(arr_backup, arr);
    strreverse(arr);

    int result=strcmp(arr_backup, arr);
    if(result<0)
    {
        printf("%d\n", -1);
    }
    else if(0==result)
    {
        printf("%d\n", 0);
    }
    else
    {
        printf("%d\n", 1);
    }

    return 0;
}

void strreverse(char a[])
{
    int len=strlen(a);
    char c;
    char tmp;
    if(len>1)
    {
        tmp=a[0];
        a[0]=a[len-1];
        a[len-1]='\0';
        strreverse(a+1);
        a[len-1]=tmp;
    }
}


