/*
���һ���㷨linklist interSection(linklist L1,linklist L2)��
�������������ʾ�ļ���L1��L2�Ľ��������������һ���µĴ�ͷ
���ĵ������沢���ر�ͷ��ַ��
*/
/**********************************/
/*�ļ����ƣ�lab3_07.c                 */
/**********************************/
#include "slnklist.h"
/*�뽫���������������������в���*/
linklist   interSection(linklist L1, linklist L2)
{
	linklist L3,head;
	head=L3 = (linklist)(malloc(sizeof(node)));
	linklist a = L1->next,b = L2->next;
	linklist c = b;

	while (a) {
		while (b) {
			if (a->info == b->info) {
				L3->next = (linklist)(malloc(sizeof(node)));
				L3 = L3->next;
				L3->info = a->info;
				
				b = b->next;
				
			}
			else { b = b->next; }
		}
		b = c;
		a = a->next;
	}
	L3->next = NULL;
	return head;
}
int main()
{
 linklist h1,h2,h3;
 h1=creatbyqueue();           /*β�巨����������,����ʱ���������ظ�����*/
 h2=creatbyqueue();
 print(h1);                   /*���������h1*/
 print(h2);
 h3=interSection(h1,h2);      /* ��h1��h2�Ľ���*/
 print(h3);
 delList(h1);
 delList(h2);
 delList(h3);
 return 0;
}
