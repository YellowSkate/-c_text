/*
���дһ���㷨����void partion(linklist head)��
����ͷ���ĵ�����head�е�����ֵΪ�����Ľ�����
�������ǰ�棬����ֵΪż���Ľ�����������ĺ��档
*/

/**********************************/
/*�ļ����ƣ�lab3_08.c             */
/**********************************/
#include "slnklist.h"
/*�뽫���������������������в���*/
void partion(linklist head){
    
    linklist pre, p;
    pre = NULL;
    p = head->next;
    while (p){
        
        if (p->info % 2 == 0) {                 //�ҵ�ż���ڵ�
            pre = p;
            while (pre && pre->info % 2 == 0) {         //Ѱ��ż���ڵ����������ڵ� 

                pre = pre->next;
            }
            if (pre != NULL) {
                int temp = p->info;
                p->info = pre->info;
                pre->info = temp;                   //�ڵ�ֵ����
            }
        }
            p = p->next;

    }

}
int main()
{        linklist head;
         head=creatbyqueue();           /*β�巨������ͷ���ĵ�����*/
         print(head);                   /*���������head*/
         partion(head);
         print(head);
         delList(head);
         return 0;
}
