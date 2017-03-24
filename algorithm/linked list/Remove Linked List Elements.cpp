/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        while(head && head->val == val) head = head->next; //for case: [1,1] 1
        ListNode *node = head;
        while(node && node->next){ //check next node
            if(node->next->val == val) 
                node->next = node->next->next; //delete next node
            else
                node = node->next;
            
        }
        return head;
    }
};