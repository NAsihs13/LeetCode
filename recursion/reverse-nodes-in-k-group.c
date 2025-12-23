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

    struct ListNode *prev = NULL;
    curr = head;

    // 翻转k范围内的linked list
    for (int i = 0; i < k; i++) {
        struct ListNode *next = curr->next;
        curr->next = prev;                      // 把当前节点指向前一个节点
        prev = curr;                            // 指向翻转好部分的头
        curr = next;                            // 去处理下一个没有反转好的节点
    }

    head->next = reverseKGroup(curr, k);

    return prev;





}