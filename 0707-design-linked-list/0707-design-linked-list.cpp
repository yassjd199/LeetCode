struct Node
{
    int val ;
    Node* nxt ;
    Node(int val) {
        this->val = val;
        nxt = NULL;
    }

};

class MyLinkedList {
public:
    Node* head;
    int size = 0;
    MyLinkedList() {
        head = new Node(-1);
        size = 0;
    }

    int get(int index) {
        int i = 0;
        Node* tmp = head ;
        while (i != index && tmp) {
            tmp = tmp->nxt;
            i++;
        }
        if (!tmp) return -1;
        return tmp->val;

    }

    void addAtHead(int val) {
        size++;
        if (head->val == -1) {
            head->val = val;
            return ;
        }
        Node* newHead = new Node(val);
        newHead->nxt = head;
        head = newHead;

    }

    void addAtTail(int val) {
        size++;
        if (head->val == -1) {
            head->val = val;
            return;
        }
        Node* tmp = head ;
        Node* prev = NULL;
        while (tmp) {
            prev = tmp;
            tmp = tmp->nxt;
        }
        prev->nxt = new Node(val);

    }

    void addAtIndex(int index, int val) {
        if (index > size) return ;
        if (index == size) {
            addAtTail(val);
            return  ;
        }
        if(index==0){
            addAtHead(val);
            size++;
            return ;
        }
        size++;
        Node* tmp = head ;
        Node* prev = NULL;
        int i = 0;
        while (i != index && tmp) {
            prev = tmp;
            tmp = tmp->nxt;
            i++;
        }
        Node* newNode = new Node(val);
        prev->nxt = newNode ;
        newNode->nxt = tmp;

    }

    void deleteAtIndex(int index) {
        int i = 0;
        if (index == 0 && size == 1) {
            head->val = -1;
            size--;
            return ;
        }
        if (index == 0) {
            head = head->nxt;
            size--;
            return ;
        }
        Node* tmp = head;
        Node* prev = NULL;
        while (i != index && tmp) {
            prev = tmp;
            tmp = tmp->nxt;
            i++;
        }
        if (!tmp) return ;
        prev->nxt = tmp->nxt;
        size--;

    }
};


/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */