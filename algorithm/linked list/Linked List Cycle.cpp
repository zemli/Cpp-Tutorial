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
    bool hasCycle(ListNode *head) {
        ListNode *slow, *fast;
        slow = head;
        fast = head;
        while(slow){ //judge whether slow == NULL
        	slow = slow->next;
        	if(fast->next && fast->next->next)
        		fast = fast->next->next;
        	else
        		return false;
        	if(fast == slow) return true;
        }
        return false;
    }
};