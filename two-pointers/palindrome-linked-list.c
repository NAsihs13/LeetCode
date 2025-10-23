/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *front;

bool isPalindromeRec(struct ListNode *head){
    if (head == NULL) {
        return true;
    }

    bool result = isPalindromeRec(head->next);

    if (!result) return false;

    if (front->val != head->val) {
        return false;
    }

    front = front->next;
    return true;
}

bool isPalindrome(struct ListNode* head) {
    front = head;
    return isPalindromeRec(head);
}