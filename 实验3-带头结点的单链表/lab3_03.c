/*
假设带头结点的单链表head是升序排列的，设计算法函数linklist insert(linklist head,datatype x)，
将值为x的结点插入到链表head中，并保持链表有序性。
分别构造插入到表头、表中和表尾三种情况的测试用例进行测试。
*/
/**********************************/
/*文件名称：lab3_03.c                 */
/**********************************/
#include "slnklist.h"
/*请将本函数补充完整，并进行测试*/
void  insert(linklist head ,datatype x)
{
    linklist q,c=head->next;
    linklist xx;
    q = (linklist)malloc(sizeof(node));
    xx = (linklist)malloc(sizeof(node));
    q = NULL;
    while (c&&c->info<x) {
          q = c;            //q为x前一个节点,c为x节点
         c= c->next;
    }
    if (q == NULL) {
        xx->info = x;
        xx->next = c;
        head->next = xx;
    }
    else {
        xx->info = x; xx->next = c;
        q->next = xx;
    }
}
int main()
{   datatype x;
    linklist head;
    printf("输入一组升序排列的整数：\n");
    head=creatbyqueue();				/*尾插入法建立带头结点的单链表*/
    print(head);
    printf("请输入要插入的值：");
    scanf("%d",&x);
    insert(head,x);				    /*将输入的值插入到带头结点的单链表适当位置*/
    print(head);
    delList(head);
    return 0;
}
