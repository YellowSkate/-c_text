/*
��֪������ͷ���ĵ�����L1��L2�еĽ��ֵ���Ѱ�������������㷨����
linklist mergeAscend (linklist L1,linklist L2)��L1��L2�ϲ���һ�������
��ͷ�ᵥ������Ϊ�����ķ��ؽ����
����㷨����linklist mergeDescend (linklist L1,linklist L2)
��L1��L2�ϲ���һ������Ĵ�ͷ�ᵥ������Ϊ�����ķ��ؽ����
�����main()�������в��ԡ�
*/
/**********************************/
/*�ļ����ƣ�lab3_06.c                 */
/**********************************/
#include "slnklist.h"
/*�뽫���������������������в���*/
linklist mergeAscend(linklist L1,linklist L2){                      //��С����
    linklist L3,head;
    linklist l11 = L1->next;
    linklist l22 = L2->next;
   
    L3 = (linklist)(malloc(sizeof(node)));
    
    head = L3;
    
    
    while (l11&&l22) {                                                  
        if (l11->info < l22->info) {                                   //l11 С,���Ʋ���L3;          //�ֲ�����k���ͷ�;�����ս�
            node k;
            k.next = NULL;
            k.info = l11->info;
            L3->next = &k;                               //�ֲ�����k���ͷ�;�����ս�
            L3 = L3->next;
            l11 = l11->next;
        }
        else {
            node k;
            k.next = NULL;
            k.info = l22->info;
            L3->next = &k;
            L3 = L3->next;
            l22 = l22->next;
        }
    }
    if (l11) {
    };

    if (l22) {
    };
    return head;
}
linklist mergeDescend(linklist L1,linklist L2)
{       

}
int main()
{       linklist h1,h2,h3;
         h1=creatbyqueue();     /*β�巨����������,��������������*/
         h2=creatbyqueue();
         print(h1);
         print(h2);
         h3=mergeAscend(h1,h2);/*����ϲ���h3*/
            /*����ϲ������h3=mergeDescend(h1,h2); */
         print(h3); 
         
         //h3 = mergeDescend(h1, h3);  /*����ϲ������h3=mergeDescend(h1,h2); */
         //print(h3);
         delList(h3);
         return 0;
}
