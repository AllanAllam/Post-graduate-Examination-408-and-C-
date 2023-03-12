#include <stdio.h>
//作业4.3
//某人想将手中的一张面值100元的人民币换成10元、5元、2元和1元面值的票子。
//要求换正好40张，且每种票子至少一张。问：有几种换法？

int main(){
	//列举所有情况，筛出100元、40张的
	int n_rmb10=0, n_rmb5=0, n_rmb2=0, n_rmb1=0;//a,b,c,d
	int sum_rmb=0, sum_n=0, num=0;
	for(n_rmb10=1; n_rmb10<=100/10; n_rmb10++)
	{
		for(n_rmb5=1; n_rmb5<=100/5; n_rmb5++)
		{
			for(n_rmb2=1; n_rmb2<=100/2; n_rmb2++)//n_rmb2<=37
			{
				for(n_rmb1=1; n_rmb1<=100/1; n_rmb1++)//n_rmb1<=37
				{
					sum_rmb=n_rmb10*10+n_rmb5*5+n_rmb2*2+n_rmb1*1;
					sum_n=n_rmb10+n_rmb5+n_rmb2+n_rmb1;
					if(100==sum_rmb && 40==sum_n)
					{
						num++;
					}
				}
			}
		}
	}
	printf("%d", num);

	return 0;
}

