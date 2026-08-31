class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* curr = head;

        while (curr != nullptr) {
            ListNode* front = curr->next; // save next node
            curr->next = prev;            // reverse pointer
            prev = curr;                  // move prev forward
            curr = front;                 // move curr forward
        }

        return prev; // new head
    }
};
