class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        if(head == NULL){
            return head;
        }
        ListNode * deleteHead = head;
        while(head != NULL && head->val == val){
            deleteHead = head;
            head = head->next;
            delete deleteHead;
        }
        ListNode * tmp = head;
        ListNode * deleteNode = NULL;
        while(tmp != NULL && tmp->next != NULL){
            if(tmp->next->val == val){
                deleteNode = tmp->next;
                tmp->next = deleteNode->next;
                delete deleteNode;
            }
            else tmp = tmp->next;
        }
        return head;
    }   
};