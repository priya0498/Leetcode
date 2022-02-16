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
    ListNode* swapPairs(ListNode* head) {
        if (!head || !(head -> next)) return head;
        ListNode* new_head = new ListNode(0);
        new_head -> next = head;
        ListNode* pre = new_head; 
        ListNode* cur = head;
        while (pre -> next && cur -> next) {
            pre -> next = cur -> next;
            cur -> next = cur -> next -> next;
            pre -> next -> next = cur;
            pre = cur;
            cur = pre -> next;
        }
        return new_head -> next;
    }
};