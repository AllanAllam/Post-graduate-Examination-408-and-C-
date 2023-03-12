//作业19，C语言语法
//1.读取一个有符号数，左移输出、右移输出
//2.输入5个数，例如 8 5 3 5 8 ，输出只出现一次的数
//11/30

#include <stdio.h>

int main(){
	int input=0;
	scanf("%d", &input);
	printf("%2d\n", input<<1);
	printf("%2d\n", input>>1);

	int in[5];
	for(int i=0;i<5;i++){
		scanf("%d", &in[i]);
	}
	int result=0;
	for(int i=0;i<5;i++){
		result^=in[i];
	}
	printf("%d\n", result);

	return 0;
}


//作业20，数据的机器级表示
//1.通过单步调试查看内存，计算1.456指数部分和小数部分
//例：4.5 输出  2  1，即4.5=2^2 * 1.001B
//12/2

#include <stdio.h>

int main(){
	float i;
	i=1.456;
	//内存小端 35 5e ba 3f
	//00111111 10111010 01011110 00110101
	//0 01111111 01110100101111000110101
	//1.456=2^(2^7-1-127) * 1.01110100101111000110101
	printf("%3d%3d\n", 0, 13);
	return 0;
}

