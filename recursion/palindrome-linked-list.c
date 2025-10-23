/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode *helper(struct ListNode* node) {
    if (node == NULL || node->next == NULL) {
        return node;
    }

    struct ListNode *new = helper(node->next);
    node->next->next = node;
    node->next = NULL;
    return new;
}

bool isPalindrome(struct ListNode* head) {
    if (head == NULL) {
        return false;
    }

    struct ListNode *fastNode = head->next->next;
    struct ListNode *slowNode = head->next;

    while (fastNode != NULL){
        fastNode = fastNode->next->next;
        slowNode = slowNode->next->next;
    }

    struct ListNode *new = helper(slowNode);
        while (new!= NULL) {
            if (new->val == head->val && new != NULL) {
            new = new->next;
            head = head->next;
            
        } else {
            return false;
        }
    }
    
    return true;

}