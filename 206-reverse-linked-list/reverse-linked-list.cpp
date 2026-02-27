class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        int ans;
        ListNode* prev = NULL;
        ListNode* curr = head;
        while(curr!=NULL)
        {
            ListNode* newNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = newNode;
        }
        return prev;
    }
};