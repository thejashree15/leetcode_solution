class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        // Step 1: Check if k nodes exist
        ListNode* temp = head;
        for(int i = 0; i < k; i++) {
            if(temp == NULL) return head; // less than k nodes
            temp = temp->next;
        }

        // Step 2: Reverse k nodes
        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* next = NULL;

        int count = 0;
        while(curr != NULL && count < k) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
            count++;
        }

        // Step 3: Recursive call for remaining list
        if(next != NULL) {
            head->next = reverseKGroup(next, k);
        }

        // Step 4: Return new head
        return prev;
    }
};