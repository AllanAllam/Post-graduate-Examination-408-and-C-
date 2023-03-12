//作业12，链表操作-查找、插入、删除
//11/17

#include <stdio.h>
#include <stdlib.h>

typedef int LinkElemType;
typedef struct LinkNode{
	LinkElemType data;
	LinkNode *next;
}LinkNode, *LinkList;

//链表打印
void linklist_print(LinkList L){
	L=L->next;
	while(L){
		printf("%3d", L->data);
		L=L->next;
	}
	printf("\n");
}
//尾插法建表
void linklist_tailcreate(LinkList &L){
	L=(LinkList)malloc(sizeof(LinkNode));
	LinkList l, end=L;
	LinkElemType input=0;
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
//按位查找
LinkList linklist_elemget(LinkList L, int pos){
	if(pos<0){
		return NULL;
	}
	int i=0;
	while(i<pos && L){
		L=L->next;
		i++;
	}
	return L;
}
//插入元素
bool linklist_insert(LinkList L, int pos, LinkElemType in){
	LinkList pre=linklist_elemget(L, pos-1);
	if(pre){
		LinkList l;
		l=(LinkList)malloc(sizeof(LinkNode));
		l->data=in;
		l->next=pre->next;
		pre->next=l;
		return true;
	}
	return false;
}
//删除元素
bool linklist_delete(LinkList L, int pos, LinkElemType &out){
	LinkList pre=linklist_elemget(L, pos-1);
	if(pre){
		LinkList l=pre->next;
		out=l->data;
		pre->next=l->next;
		free(l);
		l=NULL;
		return true;
	}
	return false;
}


int main(){
	LinkList L;
	linklist_tailcreate(L);
	linklist_print(L);

	LinkList get=NULL;
	get=linklist_elemget(L, 2);
	if(get){
		printf("%d\n", get->data);
	}else{
		printf("NULL\n");
	}

	bool ret;
	ret=linklist_insert(L, 2, 99);
	if(ret){
		linklist_print(L);
	}else{
		printf("insert failed\n");
	}

	LinkElemType del;
	ret=linklist_delete(L, 4, del);
	if(ret){
		linklist_print(L);
	}else{
		printf("delete failed\n");
	}


	return 0;
}

