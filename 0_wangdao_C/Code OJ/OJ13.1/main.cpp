//作业13，栈与队列-入栈、出栈、入队、出队
//11/23
#include <stdio.h>
#include <stdlib.h>

//栈部分
#define SqsMaxSize 10
typedef int SqsElemType;
typedef struct SqStack{
	SqsElemType data[SqsMaxSize];
	int top;
}SqStack;
void sqstack_init(SqStack &SS){
	SS.top=-1;
}
bool sqstack_push(SqStack &SS, SqsElemType in){
	if(SqsMaxSize-1==SS.top){
		return false;
	}
	SS.data[++SS.top]=in;
	return true;
}
bool sqstack_pop(SqStack &SS, SqsElemType &out){
	if(-1==SS.top){
		return false;
	}
	out=SS.data[SS.top--];
	return true;
}

//循环队列部分
#define SqqMaxSize 5
typedef int SqqElemType;
typedef struct SqQueue{
	SqqElemType data[SqqMaxSize];
	int front, rear;
}SqQueue;
void sqqueue_init(SqQueue &SQ){
	SQ.front=SQ.rear=0;
}
bool sqqueue_en(SqQueue &SQ, SqqElemType in){
	if((SQ.rear+1)%SqqMaxSize==SQ.front){
		return false;
	}
	SQ.data[SQ.rear]=in;
	SQ.rear=(SQ.rear+1)%SqqMaxSize;
	return true;
}
bool sqqueue_de(SqQueue &SQ, SqqElemType &out){
	if(SQ.front==SQ.rear){
		return false;
	}
	out=SQ.data[SQ.front];
	SQ.front=(SQ.front+1)%SqqMaxSize;
	return true;
}

int main(){
	//栈部分
	SqStack SS;
	sqstack_init(SS);

	SqsElemType input;
	for(int i=0; i<3; i++){
		scanf("%d", &input);
		sqstack_push(SS, input);
	}
	SqsElemType output;
	for(int i=0; i<3; i++){
		sqstack_pop(SS, output);
		printf("%2d", output);
	}
	printf("\n");

	//循环队列部分
	SqQueue SQ;
	sqqueue_init(SQ);

	SqqElemType input2;
	bool ret;
	for(int i=0; i<5; i++){
		scanf("%d", &input2);
		ret=sqqueue_en(SQ, input2);
		if(!ret){
			printf("false\n");
		}
	}
	SqqElemType output2;
	for(int i=0; i<4; i++){
		sqqueue_de(SQ, output2);
		printf("%2d", output2);
	}
	printf("\n");

	return 0;
}

