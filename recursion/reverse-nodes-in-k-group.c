/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseKGroup(struct ListNode* head, int k) {
    struct ListNode *curr = head;
    

    // 保证一定有不少于k位，如果少于k位那就直接return
    for (int i = 0; i < k; i++){
        if (curr == NULL) return head;
        curr = curr->next;
    }

    //
    struct ListNode *prev = NULL;
    curr = head;

    for (int i = 0; i < k; i++) {
        struct ListNode *next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

    head->next = reverseKGroup(curr, k);





}