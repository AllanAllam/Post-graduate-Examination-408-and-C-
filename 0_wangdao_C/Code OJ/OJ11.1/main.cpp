//作业11，链表操作-头插法、尾插法、输出
//11/17

#include <stdio.h>
#include <stdlib.h>

typedef int LilElemType;
typedef struct LinkNode{
	LilElemType data;
	struct LinkNode *next;
}LinkNode, *LinkList;

//链表打印
void linklist_print2(LinkList L){
	L=L->next;
	while(L){
		printf("%d", L->data);
		L=L->next;
	if(L){
		printf(" ");
	}
	}
	printf("\n");
}
//链表头插法建立
void linklist_headcreate(LinkList &L){
	L=(LinkList)malloc(sizeof(LinkNode));
	L->next=NULL;
	LinkList l;
	LilElemType input=0;

	scanf("%d", &input);
	while(input!=9999){ //判断语句不能 while(scanf()!=999)
		l=(LinkList)malloc(sizeof(LinkNode));
		l->data=input;
		l->next=L->next;
		L->next=l;
		scanf("%d", &input);
	}
//or
//	while(scanf("%d", &input);){
//	if(9999==input){
//		break;
//	}
//		l=(LinkList)malloc(sizeof(LinkNode));
//		l->data=input;
//		l->next=L->next;
//		L->next=l;
//	}
}
//链表尾插法建立
void linklist_tailcreate(LinkList &L){
	L=(LinkList)malloc(sizeof(LinkNode));
//	L->next=NULL;
	LinkList l,end=L;
	LilElemType input=0;
	scanf("%d", &input);

	while(input!=9999){
		l=(LinkList)malloc(sizeof(LinkNode));
		l->data=input;
		end->next=l;
		end=l;
		scanf("%d", &input);
	}
	end->next=NULL;
}

int main(){
	LinkList L;
	linklist_tailcreate(L);
	linklist_print2(L);

	return 0;
}
