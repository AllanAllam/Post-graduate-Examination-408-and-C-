#include <stdio.h>

//作业4.2 n阶层的计算
int main(){
	int n=0, fac=1;
	scanf("%d", &n);

  //倒序计算n的阶层
	while(n>1)
	{
		fac*=n;
		n--;
	}
	printf("%d", fac);

	return 0;
}
