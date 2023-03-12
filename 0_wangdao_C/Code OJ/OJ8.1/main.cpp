#include <stdio.h>
//结构体
//输入一个学生的学号，姓名，性别，用结构体存储，通过scanf读取后，然后再通过printf打印输出
typedef struct{
    int num;
    char name[20];
    char sex;
}stu;

int main() {
    stu s;
    scanf("%d %s %c", &s.num, s.name, &s.sex);
    printf("%d %s %c", s.num, s.name, s.sex);

    return 0;
}
