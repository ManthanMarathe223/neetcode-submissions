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
        ListNode *tmp1 = head;
        ListNode *tmp2 = head;

        while(tmp2 != nullptr && tmp2->next != nullptr){
            tmp1 = tmp1->next;
            tmp2 = tmp2->next->next;

            if(tmp1 == tmp2) return true;
        }

        return false;
    }
};
