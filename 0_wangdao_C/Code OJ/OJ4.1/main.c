#include <stdio.h>
#include <math.h>

//作业4.1 对称数判断

void symnum_tell(int num);
void symnum_tell2(int num);

int main()
{
	int num=0;
	scanf("%d", &num);

	symnum_tell2(num);

	return 0;
}

void symnum_tell(int num)
{

//	int n=0;
//	while(num/=10 != 0) //死循环，赋值优先级低于关系
//	{
////		num/=10;
//		n++;
//	}
//	printf("%d", n);

	int left=0, right=0;
	int n=0, num_bk=0;
	int flag=1;
	while(num>10)
	{
		num_bk=num;
		n=0;
		while(num != 0)
		{
			num/=10;
			n++;
		}

		right=num_bk%10;
		left=num_bk/pow(10,n-1); //double pow(double x, double y)
		num=num_bk%(int)pow(10,n-1)/10;

		if(left != right)
		{
			flag=0;
			break;
		}

	}
	flag && printf("yes\n");
	flag || printf("no\n");
}

//通过逆置比较，判断对称数
void symnum_tell2(int num)
{
	int a=num;
	int b=0;
	while(num)
	{
		b=b*10+num%10;
		num/=10;
	}
	if(a==b)
	{
		printf("yes\n");
	}else{
		printf("no\n");
	}
}


