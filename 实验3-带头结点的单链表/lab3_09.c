/*
��дһ�������þ����ܿ�ķ������ش�ͷ��㵥�����е�����k�����ĵ�ַ����������ڣ��򷵻�NULL��
*/
/**********************************/
/*�ļ����ƣ�lab3_09.c             */
/**********************************/
#include "slnklist.h"
/*�뽫���������������������в���*/
linklist   search(linklist head,int k){
    if (head == NULL || k <= 0) {
        return NULL;

    }
    linklist b = head;
    linklist a = head;
       

    for (int i = 1; i < k ; i++) {
        if (b->next != NULL) {
            b = b->next;
        }
        else {
            return NULL;
        }
    }
    while (b->next != NULL) {
        b = b->next;
        a = a->next;

    }
    return a;
}
int main()
{
     int k;
     linklist head,p;
     head=creatbyqueue();        /*β�巨������ͷ���ĵ�����*/
     print(head);                  /*���������head*/
     printf("k=");
     scanf("%d",&k);
     p=search(head,k);
     if (p) printf("%d\n",p->info);
     else
         printf("Not Found!\n");
     delList(head);
     return 0;
}
