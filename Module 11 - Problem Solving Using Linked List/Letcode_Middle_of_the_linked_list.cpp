class Solution {
public:
    int size(ListNode * head){
        int count = 0;
        ListNode * tmp = head;
        while(tmp != NULL){
            count++;
            tmp = tmp->next;
        }
        return count;
    }
    ListNode* middleNode(ListNode* head) {
        ListNode * tmp = head;
        int sz = size(head);
        for(int i=0; i<sz/2; i++){
            tmp = tmp->next;
        }
        return tmp;
    }
};
