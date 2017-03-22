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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *node1 = headA, *node2 = headB; 
        if(!node1 || !node2) return NULL;
        while(node1 != node2){
            if(node1 == NULL) node1 = headB; //cannot use (node1->next == NULL). it cannot feasible for [1] and [1,2,3], two nodes always has 1 distance
            else node1 = node1->next;
            
            if(node2 == NULL) node2 = headA;
            else node2 = node2->next;
        }
        
        
        
        return node1;
        
    }
};