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
        ListNode **list;
        list = &head; //initial double pointer by pass the addr of the pointer // **list --> *node --> ListNode
        
        while(*list != nullptr){
            if((*list)->val == val){
                *list = (*list)->next; //manipulate the pointer. change &LIstnode to &nextListnode, the pointer *list points to the next node in the list
            } else {
                list = &(*list)->next; //the pointer to the pointer of nodeList points to node->next
            }
            
        }
        
        return head;
    }
};