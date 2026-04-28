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
    ListNode* reverse_list(ListNode* head){
        // ListNode *temp, *prev=nullptr;
        // while(head!=nullptr){
        //     temp=head->next;
        //     head->next=prev;
        //     prev=head;
        //     head=temp;
        // }
        // return prev;
        return head;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* rev_l1=reverse_list(l1);
        ListNode* rev_l2=reverse_list(l2);
        ListNode* rev_ans=nullptr,*ans;
        int carryover=0;
        while(rev_l1!=nullptr and rev_l2!=nullptr){
            int temp_ans=rev_l1->val+rev_l2->val+carryover;
            ListNode* temp=new ListNode(temp_ans%10);
            if(rev_ans==nullptr) {
                rev_ans=temp;
                ans=rev_ans;
            }
            else {
                rev_ans->next=temp;
                rev_ans=temp;
            }
            carryover=temp_ans/10;
            rev_l1=rev_l1->next;
            rev_l2=rev_l2->next;
        }
        while(rev_l1!=nullptr){
            rev_ans->next=rev_l1;
            rev_ans=rev_ans->next;
            int temp=rev_ans->val+carryover;
            rev_ans->val=temp%10;
            carryover=temp/10;
            rev_l1=rev_l1->next;
        }
        while(rev_l2!=nullptr){
            rev_ans->next=rev_l2;
            rev_ans=rev_ans->next;
            int temp=rev_ans->val+carryover;
            rev_ans->val=temp%10;
            carryover=temp/10;
            rev_l2=rev_l2->next;
        }
        if(carryover>0){
            rev_ans->next= new ListNode(1);
            rev_ans=rev_ans->next;
        }
        ans=reverse_list(ans);
        return ans;
    }
};
