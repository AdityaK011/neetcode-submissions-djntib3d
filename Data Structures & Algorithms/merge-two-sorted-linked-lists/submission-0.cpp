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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* ans= new ListNode();
        ListNode* temp=ans;
        while(list1!=nullptr and list2!=nullptr){
            if(list1->val<list2->val){
                ans->next= new ListNode();
                ans=ans->next;
                ans->val=list1->val;
                list1=list1->next;
            }
            else{
                ans->next=new ListNode();
                ans=ans->next;
                ans->val=list2->val;
                list2=list2->next;
            }
        }
        while(list1!=nullptr){
            ans->next= new ListNode();
            ans=ans->next;
            ans->val=list1->val;
            list1=list1->next;
        }
        while(list2!=nullptr){
            ans->next=new ListNode();
            ans=ans->next;
            ans->val=list2->val;
            list2=list2->next;
        }
        return temp->next;
    }
};
