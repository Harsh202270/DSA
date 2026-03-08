class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL || head->next == NULL)
            return head;
        ListNode* temp = head;
        int count = 0;
        while(temp!=NULL)
        {
            count++;
            temp = temp->next;
        }
        int rotate = k%count;
        if(rotate==0)
            return head;
        temp = head;
        int step = count-rotate;
        for(int i=1;i<step;i++)
        {
            temp=temp->next;
        }
        ListNode* head1 = temp->next;
        temp->next = NULL;

        ListNode* tail = head1;
        while(tail->next!=NULL)
        {
            tail=tail->next;
        }
        tail->next = head;
        return head1;
    }
};