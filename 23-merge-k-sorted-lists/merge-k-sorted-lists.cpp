class Solution {

     ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

        ListNode *dummyNode = new ListNode(-1);
        ListNode *tail = dummyNode;

        ListNode *head1 = list1;
        ListNode *head2 = list2;


        while (head1 != NULL && head2 != NULL) {
            if (head1 -> val > head2 -> val) {
                tail -> next = head2;
                head2 = head2 -> next;
            } else {
                tail -> next = head1;
                head1 = head1 -> next;
            }
            tail = tail -> next;
        }


        if (head1 != NULL) {
            tail -> next = head1;
        } else {
            tail -> next = head2;
        }


        return dummyNode -> next;
    }
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        int n = lists.size();
        if (n == 0) {
            return NULL;
        }
        ListNode *mergedHead = lists[0];
        for (int index = 1; index < n; index++) {
            mergedHead = mergeTwoLists(mergedHead, lists[index]);
        }
        return mergedHead;
    }
};