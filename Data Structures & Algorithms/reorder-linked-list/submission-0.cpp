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
    void reorderList(ListNode* head) {
        if(head==nullptr or head->next==nullptr) return;
        ListNode* fast=head;
        ListNode* slow=head;
        //find middle (slow will be at the middle)
        while(fast!=nullptr and fast->next!=nullptr){
            slow=slow->next;
            fast=fast->next->next;
            
        }
        //reverse second half
        ListNode* second=slow->next;
        slow->next=nullptr;
        ListNode* prev=nullptr;
        ListNode* temp;
        while(second!=nullptr){
            temp=second->next;
            second->next=prev;
            prev=second;
            second=temp;
        }
        //zip them together
        ListNode* first=head;
        ListNode* secondd=prev;
        while(secondd!=nullptr){
            ListNode* temp1=first->next;
            ListNode* temp2=secondd->next;
            first->next=secondd;
            secondd->next=temp1;
            first=temp1;
            secondd=temp2;
        }

        }

    
};
