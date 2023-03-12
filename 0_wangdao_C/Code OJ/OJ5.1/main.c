#include <stdio.h>
//一维数组和字符数组
//输入N个数（N小于等于100），输出数字2的出现次数；
//第一行输入要输的元素个数，比如5
//第二行输入  1 2 2 3 2，那么输出结果为3，因为2出现了3次
int main() {
    int num=0;
    int a[100];
    int count=0;
    int i=0;
    scanf("%d", &num);
    for(i=0; i<num; i++)
    {
        scanf("%d", &a[i]);
        if(a[i]==2)
        {
            count++;
        }
    }
//    int j=0;
//    for(j=0; j<num; j++)
//    {
//        if(a[j]==2)
//        {
//            count++;
//        }
//    }
    printf("%d\n", count);
    return 0;
}
