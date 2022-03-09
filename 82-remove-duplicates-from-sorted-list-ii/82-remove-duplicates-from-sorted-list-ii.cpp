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
    ListNode* deleteDuplicates(ListNode* head) {
        
        if (!head||!head->next) return head;
        
        ListNode* node = head->next;
        
        
        if (node->val != head->val) {
           
            head->next = deleteDuplicates(node);
            return head;
        } 
        
        else {
           
            while (node && node->val == head->val) node = node->next;
        }
            return deleteDuplicates(node);
        
    }
};