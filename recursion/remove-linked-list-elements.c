/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeElements(struct ListNode* head, int val) {
    if(head == NULL) {
        return NULL;
    }

    head->next = removeElements(head->next, val);

    if (head->val == val) {
        struct ListNode *temp = head->next;
        free(head);
        return temp;
    } else {
        return head;
    }
}