/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* swapPairs(struct ListNode* head) {
    if (head == NULL || head->next) return head;

    struct ListNode *rest = swapPairs(n2);

    struct node *n1 = curr;
    struct node *n2 = curr->next;

    n2->next = n1;
    n1->next = curr->next;

    return n2;

}