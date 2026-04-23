class Solution {
    public:
        ListNode* reverseList(ListNode* head){
            ListNode* ele = nullptr;
            while(head){
                ListNode* tmp = head->next;
                head->next = ele;
                ele = head;
                head = tmp;
            }
            return ele;
        }
};