/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * } */

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *head = new ListNode(); // Dummy head
        ListNode *current = head; // Pointer to build the new list
        int carry = 0; // Initialize carry to 0

        // Traverse both lists
        while (l1 != nullptr || l2 != nullptr || carry != 0) {
            int sum = carry; // Start with carry

            // Add l1's value if l1 is not null
            if (l1 != nullptr) {
                sum += l1->val;
                l1 = l1->next; // Move to the next node
            }

            // Add l2's value if l2 is not null
            if (l2 != nullptr) {
                sum += l2->val;
                l2 = l2->next; // Move to the next node
            }

            carry = sum / 10; // Calculate new carry
            current->next = new ListNode(sum % 10); // Create a new node for the sum's digit
            current = current->next; // Move to the next node in the result list
        }

        return head->next; // Return the actual start of the result list (skipping the dummy head)
    }
};