class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        int ans;
        if(!head)
        return head;
        ListNode* current = head;
        while (current -> next)
        {
            if(current->val == current->next->val)
                current->next = current->next->next;
            else
                current=current->next;
        }
        return head;
    }
};