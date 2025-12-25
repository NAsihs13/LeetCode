/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* swapPairs(struct ListNode* head) {
    if (head == NULL || head->next == NULL) return head;

    struct ListNode *n1 = head;
    struct ListNode *n2 = head->next;

    struct ListNode *rest = swapPairs(n2->next);

    n2->next = n1;
    n1->next = rest;

    return n2;

}