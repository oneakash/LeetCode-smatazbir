/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int l1 = 0, l2 = 0;
        ListNode* v = headA;
        while(v){
            l1++;
            v = v->next;
        }
        v = headB;
        while(v){
            l2++;
            v=v->next;
        }
        if(l1>l2){
            int d = l1-l2;
            v = headA;
            while(d--){
                v = v->next;
            }
            ListNode* w = headB;
            while(v && v!=w){
                v = v->next;
                w=w->next;
            }
            return v;
        }else{
            int d = l2-l1;
            v = headB;
            while(d--){
                v=v->next;
            }
            ListNode* w = headA;
            while(v && v!=w){
                v=v->next;
                w=w->next;
            }
            return v;
        }
    }
};