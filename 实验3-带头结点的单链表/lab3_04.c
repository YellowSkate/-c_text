/*
��д�㷨����void  delallx(linklist head, int x)��ɾ����ͷ��㵥����head������ֵΪx�Ľ�㡣
*/
/**********************************/
/*�ļ����ƣ�lab3_04.c                 */
/**********************************/
#include "slnklist.h"
/*�뽫���������������������в���*/
void  delallx(linklist head,int x)
{
    linklist a = head->next;
    linklist b = head;
    while (a) {
        while (a&&a->info!=x)
        {
            b = a;
            a = a->next;        //�ҵ��ڵ�a==x
        }
        if (a)
        {
            b->next = a->next;  
            a = b->next;
        }
    }


}
int main()
{   datatype x;
    linklist head;
    head=creatbyqueue();				/*β���뷨������ͷ���ĵ�����*/
    print(head);
    printf("������Ҫɾ����ֵ��");
    scanf("%d",&x);
    delallx(head,x);
    print(head);
    delList(head);
    return 0;
}
