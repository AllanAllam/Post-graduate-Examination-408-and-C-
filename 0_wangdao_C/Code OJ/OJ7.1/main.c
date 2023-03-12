#include <stdio.h>
//函数
//假如有n个台阶，一次只能上1个台阶或2个台阶，请问走到第n个台阶有几种走法？
//f(n)=f(n-1)+f(n-2)

//循环实现
int fib1(int n){
    if(n<3)
    {
        return n;
    }else{
        int tmp1=1, tmp2=2;
        int sum=0;
        for(int i=3; i<=n; i++)
        {
            sum=tmp1+tmp2;
            tmp1=tmp2;
            tmp2=sum;
        }
        return sum;
    }
}

//递归实现
int fib2(int n)
{
    if(n<3)
    {
        return n;
    }else{
        return fib2(n-1)+fib2(n-2);
    }
}

int main() {
    int n=0;
    int sum=0;
    scanf("%d", &n);
    sum=fib2(n);
    printf("%d\n", sum);
    return 0;
}
