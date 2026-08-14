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
    ListNode* mergedtwolists(ListNode* l1, ListNode* l2){
        ListNode dummy(0);
        ListNode* tail=&dummy;
        while(l1!=nullptr and l2!=nullptr){
            if(l1->val==l2->val){
                tail->next=l1;
                tail=tail->next;
                l1=l1->next;
                tail->next=l2;
                tail=tail->next;
                l2=l2->next;
            }
            else if(l1->val<l2->val){
                tail->next=l1;
                tail=tail->next;
                l1=l1->next;
            }
            else{
                tail->next=l2;
                tail=tail->next;
                l2=l2->next;

            }
        }
        tail->next=l1==nullptr?l2:l1;
        return dummy.next;
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
       if(lists.empty()) return nullptr;
       while(lists.size()>1){
        vector<ListNode*> winners;
        for(int i=0;i<lists.size();i+=2){
            ListNode* a=lists[i];
            ListNode* b=(i+1==lists.size()?nullptr:lists[i+1]);
            winners.push_back(mergedtwolists(a,b));
        }
        lists=winners;
       }
       return lists[0];
    }
};
