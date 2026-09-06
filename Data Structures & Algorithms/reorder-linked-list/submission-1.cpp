class Solution {
public:
    void reorderList(ListNode* head) {
        if (!head || !head->next) return;

        // Find middle
        ListNode* slow = head;
        ListNode* fast = head;

        while (fast->next && fast->next->next) {
            slow = slow->next;
            fast = fast->next->next;
        }

        // Reverse second half
        ListNode* l2 = reverse(slow->next);
        slow->next = NULL;

        // Merge two halves
        ListNode* l1 = head;
        merge(l1, l2);
    }

    ListNode* reverse(ListNode* head) {
        ListNode* prev = NULL;
        ListNode* curr = head;

        while (curr) {
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        return prev;
    }

    void merge(ListNode* l1, ListNode* l2) {
        while (l1 && l2) {
            ListNode* n1 = l1->next;
            ListNode* n2 = l2->next;

            l1->next = l2;
            l2->next = n1;

            l1 = n1;
            l2 = n2;
        }
    }
};