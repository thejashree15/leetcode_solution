class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* fast = head;
        ListNode* slow = head;

        // Move fast n steps ahead
        for (int i = 0; i < n; i++) {
            fast = fast->next;
        }

        // If fast becomes NULL, remove the head
        if (fast == nullptr)
            return head->next;

        // Move both pointers
        while (fast->next != nullptr) {
            fast = fast->next;
            slow = slow->next;
        }

        // Delete the nth node from the end
        ListNode* delNode = slow->next;
        slow->next = slow->next->next;

        delete delNode;

        return head;
    }
};