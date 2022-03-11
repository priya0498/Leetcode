/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || head->next==NULL)
            return head;
            
        ListNode* last;
        int n = 1;
        ListNode* p = head;
        while(p->next)
        {
            n++;
            p=p->next;
        }
        p->next = head;
        last = p;
        k = k%n;
        k = n-k;
        ListNode* current = head;
        for(int i=0; i<k; i++)
        {
            last = current;
            current = current->next;
        }
        
        last->next = NULL;
        return current;
    }
};