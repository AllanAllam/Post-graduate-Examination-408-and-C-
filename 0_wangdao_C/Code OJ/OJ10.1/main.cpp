
//作业10，顺序表操作-插入、删除、打印
//输入6'\n'1'\n' 输出1 6 2 3'\n'6 2 3
//11/17

#include <stdio.h>
#include <stdlib.h>

#define SqlMaxSize 50
typedef int SqlElemType;

typedef struct SqList{
	SqlElemType data[SqlMaxSize];
	int length;
}SqList;

//顺序表打印
void sqlist_print(SqList S){
	if(0==S.length){
		printf("NULL");
	}
	for(int i=0;i<S.length;i++){
		printf("%3d", S.data[i]);
	}
	printf("\n");
}
//顺序表初始化
void sqlist_init(SqList &S){
	S.length=0;
}
//顺序表插入
bool sqlist_insert(SqList &S, int pos, SqlElemType in){
	if(SqlMaxSize==S.length){
		return false;
	}
	if(pos<1 || pos>S.length+1){
		return false;
	}
	for(int i=S.length;i>=pos;i--){
		S.data[i]=S.data[i-1];
	}
	S.data[pos-1]=in;
	S.length++;
	return true;
}
//顺序表删除
bool sqlist_delete(SqList &S, int pos, SqlElemType &out){
	if(0==S.length){
		return false;
	}
	if(pos<1 || pos>S.length){
		return false;
	}
	out=S.data[pos-1];
	for(int i=pos;i<S.length;i++){
		S.data[i-1]=S.data[i];
	}
	S.length--;
	return true;
}

int main(){
	SqList S;
	sqlist_init(S);
	S.data[0]=1;
	S.data[1]=2;
	S.data[2]=3;
	S.length=3;
	sqlist_print(S);

	SqlElemType input=0;
	scanf("%d", &input);
	if(sqlist_insert(S, 2, input)){
		sqlist_print(S);
	}else{
		printf("false\n");
	}

	int pos=0;
	SqlElemType del=0;
	scanf("%d", &pos);
	if(sqlist_delete(S, pos, del)){
		sqlist_print(S);
	}else{
		printf("false\n");
	}

	return 0;
}
