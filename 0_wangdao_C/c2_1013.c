//第二课 数据的类型，输入/输出
#include <stdio.h>

int main()
{
//	//数据类型、混合运算、进制转换
//	printf("%c, %d, %c, \n", 'A'+32, 'A', '\0');
//	
//	int n1 = 5;
//	float n2 = 5/2;
//	float n3 = (float)5/2;
//	printf("%f %f\n", n2, n3);
//	
//	int n = 0x7b; //=0173 =123
//	printf("%d, %o, %x, \n", n, n, n);
	
	
	//标准输入
	int i = 0;
	char c;
	float f = 0;
	
	scanf("%d", &i);
	printf("i = %c\n", i);
	
	fflush(stdin); //清空标准输入缓冲区 
	scanf("%c", &c);
	printf("c = %d\n", c);
//	
//	scanf("%f", &f);
//	printf("f = %f\n", f);
//	
//	scanf("%f", &f);
//	printf("f = %f\n", f);
//	//只留下一个'\n'
//	getchar(); //getchar();只能清除一个字符,上一个输入不包含空格时可用
//	scanf("%c", &c);
//	printf("c = %c\n", c);

//	int i, ret;
//	float f;
//	char c;
//	
////	ret = scanf("%d%c%f", &i, &c, &f); //输入使用空格隔开 空格=‘32’
////	printf("i=%d,c=%c,f=%f,ret=%d\n", i, c, f, ret); //ret=2,匹配成功2个
//	
//	ret = scanf("%d %c%f", &i, &c, &f); //空格抵消
//	printf("i=%d,c=%c,f=%f,ret=%d\n", i, c, f, ret); //ret=3,匹配成功3个
	
	
	
	return 0;
}

