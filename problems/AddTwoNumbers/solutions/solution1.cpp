using namespace std;

// SOLUTION NOT WORKING
// TODO: Fix solution

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    int carry = 0;
    ListNode firstNode = ListNode();
    ListNode* firstPtr = &firstNode;
    ListNode* currNode = firstPtr;
    ListNode nextNode;
    ListNode* nextPtr;
    while(true){
        (*currNode).val = ((*l1).val + (*l2).val + carry)%10;
        carry = ((*l1).val + (*l2).val + carry)/10;
        if((*l1).next == nullptr || (*l2).next == nullptr){
            break;
        }
        nextNode = ListNode();
        nextPtr = &nextNode;
        (*currNode).next = nextPtr;
        currNode = nextPtr;
        l1 = (*l1).next;
        l2 = (*l2).next;
    }
    if((*l1).next == nullptr && (*l2).next == nullptr){
        if(carry > 0){
            nextNode = ListNode(carry);
            nextPtr = &nextNode;
            (*currNode).next = nextPtr;
        }
        return firstPtr;
    }
    else if ((*l1).next == nullptr){
        ListNode temp = ListNode();
        ListNode* tempPtr = &temp;
        (*currNode).next = tempPtr;
        currNode = tempPtr;
        while(true){
            (*currNode).val = ((*l2).val + carry)%10;
            carry = ((*l2).val + carry)/10;
            if((*l2).next == nullptr){
                break;
            }
            nextNode = ListNode();
            nextPtr = &nextNode;
            (*currNode).next = nextPtr;
            currNode = nextPtr;
            l1 = (*l1).next;
            l2 = (*l2).next;
        } 
        if(carry > 0){
            nextNode = ListNode(carry);
            nextPtr = &nextNode;
            (*currNode).next = nextPtr;
        }
        return firstPtr;
    }
    else if((*l2).next == nullptr){
        ListNode temp = ListNode();
        ListNode* tempPtr = &temp;
        (*currNode).next = tempPtr;
        currNode = tempPtr;
        while(true){
            (*currNode).val = ((*l1).val + carry)%10;
            carry = ((*l1).val + carry)/10;
            if((*l1).next == nullptr){
                break;
            }
            nextNode = ListNode();
            nextPtr = &nextNode;
            (*currNode).next = nextPtr;
            currNode = nextPtr;
            l1 = (*l1).next;
            l2 = (*l2).next;
        } 
        if(carry > 0){
            nextNode = ListNode(carry);
            nextPtr = &nextNode;
            (*currNode).next = nextPtr;
        }
        return firstPtr;
    }
    else{
        cout << "You shouldn't reach here" << "\n";
        return firstPtr;
    }
}
 