class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* fast = head;
        ListNode* slow = head;

        // Move fast n steps ahead
        for(int i = 0; i < n; i++) {
            fast = fast->next;
        }

        // If fast becomes NULL → remove first node
        if(fast == NULL) {
            return head->next;
        }

        // Move both pointers
        while(fast->next != NULL) {
            fast = fast->next;
            slow = slow->next;
        }

        // Delete the node
        slow->next = slow->next->next;

        return head;
    }
};