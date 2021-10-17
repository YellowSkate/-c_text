/*
已知两个带头结点的单链表L1和L2中的结点值均已按升序排序，设计算法函数
linklist mergeAscend (linklist L1,linklist L2)将L1和L2合并成一个升序的
带头结单链表作为函数的返回结果；
设计算法函数linklist mergeDescend (linklist L1,linklist L2)
将L1和L2合并成一个降序的带头结单链表作为函数的返回结果；
并设计main()函数进行测试。
*/
/**********************************/
/*文件名称：lab3_06.c                 */
/**********************************/
#include "slnklist.h"
/*请将本函数补充完整，并进行测试*/
linklist mergeAscend(linklist L1,linklist L2){                      //从小到大
    linklist L3,head;
    linklist l11 = L1->next;
    linklist l22 = L2->next;
   
    L3 = (linklist)(malloc(sizeof(node)));
    
    head = L3;
    
    
    while (l11&&l22) {                                                  
        if (l11->info < l22->info) {                                   //l11 小,复制插入L3;          //局部变量k被释放;链表终结
            node k;
            k.next = NULL;
            k.info = l11->info;
            L3->next = &k;                               //局部变量k被释放;链表终结
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
         h1=creatbyqueue();     /*尾插法建立单链表,请输入升序序列*/
         h2=creatbyqueue();
         print(h1);
         print(h2);
         h3=mergeAscend(h1,h2);/*升序合并到h3*/
            /*降序合并请调用h3=mergeDescend(h1,h2); */
         print(h3); 
         
         //h3 = mergeDescend(h1, h3);  /*降序合并请调用h3=mergeDescend(h1,h2); */
         //print(h3);
         delList(h3);
         return 0;
}
