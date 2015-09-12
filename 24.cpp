/**
 * Definition for singly-linked list.
  */
#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

    ListNode* swapPairs(ListNode* head) {
        
        
        ListNode* a = head;
        
        while((head!=NULL)&&(head->next!=NULL)){
            ListNode* tmp = head->next;
            head->next = head->next->next;
            tmp->next = head;
            head = head->next;
        }
        return a;
    };

int main(int argc, char const *argv[])
{
    ListNode a(1), b(2), c(3), d(4), e(5);
    a.next = &b;
    b.next = &c;
    c.next = &d;
    d.next = &e;

    ListNode* aa = &a;
    while(aa){
       cout << aa->val << endl;
       aa = aa->next; 
    }

    ListNode* ss = swapPairs(&a);
    while(ss){
       cout << ss->val << endl;
       ss = ss->next; 
    }

    return 0;
}

