class LRUCache {
public:

    class Node {
    public:
        int key;
        int value;
        Node* prev;
        Node* next;

        Node(int key, int value) {
            this->key = key;
            this->value = value;
        }
    };

    Node* head = new Node(-1, -1);
    Node* tail = new Node(-1, -1);

    int capacity;
    unordered_map<int, Node*> mpp;

    LRUCache(int capacity) {
        this->capacity = capacity;

        head->next = tail;
        tail->prev = head;
    }

    void addNode(Node* node) {
        Node* temp = head->next;

        node->next = temp;
        node->prev = head;

        head->next = node;
        temp->prev = node;
    }

    void deleteNode(Node* node) {
        Node* prevNode = node->prev;
        Node* nextNode = node->next;

        prevNode->next = nextNode;
        nextNode->prev = prevNode;
    }

    int get(int key) {

        if (mpp.find(key) != mpp.end()) {

            Node* node = mpp[key];
            int ans = node->value;

            // Remove from current position
            deleteNode(node);

            // Add to front (most recently used)
            addNode(node);

            // Update map
            mpp[key] = head->next;

            return ans;
        }

        return -1;
    }

    void put(int key, int value) {

        // If key already exists
        if (mpp.find(key) != mpp.end()) {

            Node* node = mpp[key];

            deleteNode(node);
            mpp.erase(key);
        }

        // If capacity is full
        if (mpp.size() == capacity) {

            Node* leastUsed = tail->prev;

            mpp.erase(leastUsed->key);
            deleteNode(leastUsed);
        }

        // Add new node at front
        Node* newNode = new Node(key, value);

        addNode(newNode);
        mpp[key] = newNode;
    }
};