/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeNodes(struct ListNode* head) {
    if (head == NULL) return head;

    struct ListNode *right = removeNodes(head->next);

    if (right != NULL && head->val < right->val) {
        return right;
    }

    head->next = right;
    
    return head;
}