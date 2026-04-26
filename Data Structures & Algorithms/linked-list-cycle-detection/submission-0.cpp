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
    bool hasCycle(ListNode* head) {
        unordered_map<ListNode*,bool> m;
        while(head!=nullptr){
            if(m.find(head)==m.end()){
                m[head]=1;
                head=head->next;
            }
            else{
                return true;
            }
        }
        return false;
    }
};
