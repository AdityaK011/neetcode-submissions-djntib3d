/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ans=nullptr,*final_ans;
        int carryover=0;
        while(l1!=nullptr and l2!=nullptr){
            int temp_ans=l1->val+l2->val+carryover;
            ListNode* temp=new ListNode(temp_ans%10);
            if(ans==nullptr) {
                ans=temp;
                final_ans=ans;
            }
            else {
                ans->next=temp;
                ans=temp;
            }
            carryover=temp_ans/10;
            l1=l1->next;
            l2=l2->next;
        }
        while(l1!=nullptr){
            ans->next=l1;
            ans=ans->next;
            int temp=ans->val+carryover;
            ans->val=temp%10;
            carryover=temp/10;
            l1=l1->next;
        }
        while(l2!=nullptr){
            ans->next=l2;
            ans=ans->next;
            int temp=ans->val+carryover;
            ans->val=temp%10;
            carryover=temp/10;
            l2=l2->next;
        }
        if(carryover>0){
            ans->next= new ListNode(1);
            ans=ans->next;
        }
        return final_ans;
    }
};
