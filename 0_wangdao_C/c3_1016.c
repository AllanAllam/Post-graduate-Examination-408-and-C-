//第三课 运算符和表达式
#include <stdio.h>


int main()
{
	//arithmetic 算术运算符
	printf("%d\n", 10/2%4);
	
//	//relation 关系运算符
//	int a = 0;
//	while(scanf("%d", &a))
//	{
//		if(3<a<10) //a>3 && a<10
//		{
//			printf("a is between 3 and 10\n");
//		}
//		else
//		{
//			printf("a is not between 3 and 10\n");
//		}
//	}
	
//	//logic 逻辑运算符—— 判断闰年
//	int y=0;
//	while(scanf("%d", &y))
//	{
//		if(y%400==0 || y%4==0 && y%100!=0)
//		{
//			printf("is a leap year\n");
//		}else{
//			printf("is not a leap year\n");
//		}
//	}
//	int i=6;
//	printf("%d\n", !!i);
	
	//short circuit 短路运算
	int j=1;
	j&&printf("you can't see me !\n");
	
	//assign 赋值操作符
	int a=1,b=2;
	printf("%d %d\n", a+=2,b*=5);
	
	//求字节长度运算符 sizeof
	printf("%d %d\n", sizeof(char), sizeof(a));
	
	return 0;
}

