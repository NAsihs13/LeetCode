/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode *dfs(struct ListNode *left, struct ListNode *right) {
    if (right == NULL) return left;

    left = dfs(left, right->next);

    if (left == right || left->next == right) {
        right->next == NULL;
        return right;
    }

    struct ListNode *nextLeft = left->next;
    left->next = right;
    right->next = nextLeft;

    return nextLeft;

}


void reorderList(struct ListNode* head) {
    dfs(head, head);
}