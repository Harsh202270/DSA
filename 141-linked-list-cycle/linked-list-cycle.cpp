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
    bool hasCycle(ListNode *head) {
        unordered_map<ListNode*,int> v;
        ListNode* temp = head;
        while(temp!=NULL)
        {
            if(v.find(temp)==v.end())
            {
                v[temp]=1;
                temp = temp->next;
            }
            else
                return true;
        }
        return false;
    }
};