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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp=head;
        int len=0;
        while(temp!=nullptr){
            len++;
            temp=temp->next;
        }
        ListNode* start=new ListNode();
        start->next=head;
        int pos=len-n;
        int curr=0;
        temp=start;
        while(pos>=0){
            if(pos==0){
                start->next=start->next->next;
                break;
            }
            pos--;
            start=start->next;
        }
        return temp->next;
    }
};
