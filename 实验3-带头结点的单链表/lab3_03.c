/*
�����ͷ���ĵ�����head���������еģ�����㷨����linklist insert(linklist head,datatype x)��
��ֵΪx�Ľ����뵽����head�У����������������ԡ�
�ֱ�����뵽��ͷ�����кͱ�β��������Ĳ����������в��ԡ�
*/
/**********************************/
/*�ļ����ƣ�lab3_03.c                 */
/**********************************/
#include "slnklist.h"
/*�뽫���������������������в���*/
void  insert(linklist head ,datatype x)
{
    linklist q,c=head->next;
    linklist xx;
    q = (linklist)malloc(sizeof(node));
    xx = (linklist)malloc(sizeof(node));
    q = NULL;
    while (c&&c->info<x) {
          q = c;            //qΪxǰһ���ڵ�,cΪx�ڵ�
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
    printf("����һ���������е�������\n");
    head=creatbyqueue();				/*β���뷨������ͷ���ĵ�����*/
    print(head);
    printf("������Ҫ�����ֵ��");
    scanf("%d",&x);
    insert(head,x);				    /*�������ֵ���뵽��ͷ���ĵ������ʵ�λ��*/
    print(head);
    delList(head);
    return 0;
}
