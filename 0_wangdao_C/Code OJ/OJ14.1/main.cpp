//作业14，二叉树
//1.层次建树读取abcdefghij，然后前序遍历
//2.层次建树，然后中序遍历，后序遍历，层序遍历
//11/29

#include <stdio.h>
#include <stdlib.h>

typedef char BitElemType;
typedef struct BiNode{
	BitElemType data;
	BiNode *lchild;
	BiNode *rchild;
}BiNode, *BiTree;

//辅助链队
typedef BiTree LiqElemType;
typedef struct LinkNode{
	LiqElemType data;
	struct LinkNode *next;
}LinkNode, *LinkList;
typedef struct LinkQueue{
	LinkList front, rear;
}LinkQueue;
void linkqueue_init(LinkQueue &LQ){
	LQ.front=LQ.rear=(LinkList)malloc(sizeof(LinkNode));
	LQ.rear->next=NULL;
}
bool linkqueue_isempty(LinkQueue LQ){
	return LQ.front==LQ.rear;
}
void linkqueue_en(LinkQueue &LQ, LiqElemType in){
//	LinkList lq=(LinkList)malloc(sizeof(LinkNode));
	LinkList lq=(LinkList)calloc(1,sizeof(LinkNode));
	lq->data=in;
	lq->next=LQ.rear->next;
	LQ.rear->next=lq;
	LQ.rear=lq;
}
bool linkqueue_de(LinkQueue &LQ, LiqElemType &out){
	if(linkqueue_isempty(LQ)){
		return false;
	}
//	LQ.front=LQ.front->next; //空间无法释放
//	out=LQ.front->data;
	LinkList lq=(LinkList)malloc(sizeof(LinkNode));
	lq=LQ.front->next;
	out=lq->data;
	LQ.front->next=lq->next;
	if(LQ.rear==lq){
		LQ.rear=LQ.front;
	}
	free(lq);
	return true;
}

//二叉树操作
void bitree_init(BiTree &BT){
	BT=NULL;
}
bool bitree_isempty(BiTree BT){
	return NULL==BT;
}
void bitree_create(BiTree &BT){
	BiTree bt;
	bitree_init(bt);
	LinkQueue lq;
	linkqueue_init(lq);
	LiqElemType pcur; //存放当前父子树结点
	BitElemType input;

	while(scanf("%c", &input)){
		if('\n'==input){
			break;
		}
		bt=(BiTree)calloc(1,sizeof(BiNode));
		bt->data=input;
		if(bitree_isempty(BT)){
			BT=bt;
			linkqueue_en(lq, bt);
			linkqueue_de(lq, pcur);
		}else{
			if(NULL==pcur->lchild){
				pcur->lchild=bt;
				linkqueue_en(lq, bt);
			}else if(NULL==pcur->rchild){
				pcur->rchild=bt;
				linkqueue_en(lq, bt);
				linkqueue_de(lq, pcur);
			}
		}
	}
}
void bitree_preorder(BiTree BT){
	if(!bitree_isempty(BT)){
		printf("%c", BT->data);
		bitree_preorder(BT->lchild);
		bitree_preorder(BT->rchild);
	}
}
void bitree_inorder(BiTree BT){
	if(!bitree_isempty(BT)){
		bitree_inorder(BT->lchild);
		printf("%c", BT->data);
		bitree_inorder(BT->rchild);
	}
}
void bitree_postorder(BiTree BT){
	if(!bitree_isempty(BT)){
		bitree_postorder(BT->lchild);
		bitree_postorder(BT->rchild);
		printf("%c", BT->data);
	}
}
void bitree_leverorder(BiTree BT){
	LinkQueue lq;
	linkqueue_init(lq);
	LiqElemType pcur;
	linkqueue_en(lq, BT);
	while(!linkqueue_isempty(lq)){
		linkqueue_de(lq, pcur);
		printf("%c", pcur->data);
		if(NULL!=pcur->lchild){
			linkqueue_en(lq, pcur->lchild);
		}
		if(NULL!=pcur->rchild){
			linkqueue_en(lq, pcur->rchild);
		}
	}
//	printf("n\");
}

int main(){
//	//链队列代码测试
//	LinkQueue LQ;
//	linkqueue_init(LQ);
//	linkqueue_en(LQ, 8);
//	linkqueue_en(LQ, 4);
//	bool ret;
//	LiqElemType out;
//	ret=linkqueue_de(LQ, out);
//	printf("%d\n", out);
//	ret=linkqueue_de(LQ, out);
//	printf("%d\n", out);
//	ret=linkqueue_de(LQ, out);
//	if(ret){
//		printf("%d\n", out);
//	}else{
//		printf("false\n");
//	}

	BiTree BT;
	bitree_init(BT);
	bitree_create(BT); //层次建树
	bitree_preorder(BT); //前序遍历
	printf("\n");
	bitree_inorder(BT); //中序遍历
	printf("\n");
	bitree_postorder(BT); //后序遍历
	printf("\n");
	bitree_leverorder(BT); //层序遍历
	printf("\n");

	return 0;
}

