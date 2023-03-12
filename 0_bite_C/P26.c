#include <stdio.h>
enum Sex
{
	MALE,FEMALE,
	secret=3
};
struct stu
{
	char name[20];
	int age;
};

int main()
{
	int a = 10; //a在内存中占4Byte
	int* pa=&a;
	int* ppa=&pa;
	printf("hello\n");
	printf("%d,%p,%p,%p\n",a,&a,pa,ppa);
	printf("%d,%d,%d,%d\n",sizeof (char*),sizeof(int*),sizeof(long*),sizeof(float*));
	printf("%d,%d,%d\n\n",MALE,FEMALE,secret);
	
	struct stu s={"张三",20};
	struct stu* ps=&s;
	printf("%s,%d\n",s.name,s.age);
	printf("%s,%d\n",(*ps).name,(*ps).age);
	printf("%s,%d\n",ps->name,ps->age);	
	
	return 0;
}
