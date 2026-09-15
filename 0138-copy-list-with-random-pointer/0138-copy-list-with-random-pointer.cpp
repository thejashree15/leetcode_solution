/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if (!head) return nullptr;

        // Step 1: Create copy nodes and insert them after originals
        Node* temp = head;
        while (temp) {
            Node* copyNode = new Node(temp->val);
            copyNode->next = temp->next;
            temp->next = copyNode;
            temp = copyNode->next;
        }

        // Step 2: Assign random pointers for the copied nodes
        temp = head;
        while (temp) {
            if (temp->random) {
                temp->next->random = temp->random->next;
            }
            temp = temp->next->next;
        }

        // Step 3: Separate the original and copied lists
        Node* dummy = new Node(-1);
        Node* copyTail = dummy;
        temp = head;
        while (temp) {
            copyTail->next = temp->next;
            temp->next = temp->next->next;
            copyTail = copyTail->next;
            temp = temp->next;
        }

        return dummy->next;
    }
};
