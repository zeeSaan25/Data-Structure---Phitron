class Solution {
public:
    void reverse(ListNode *& head, ListNode * currentNode){
        if(currentNode -> next == NULL){
            head = currentNode;
            return;
        }
        reverse(head, currentNode->next);
        currentNode->next->next = currentNode;
        currentNode -> next = NULL;
    }

    ListNode* reverseList(ListNode* head) {
        if(head == NULL) return head;
        reverse(head, head);
        return head;
    }
};