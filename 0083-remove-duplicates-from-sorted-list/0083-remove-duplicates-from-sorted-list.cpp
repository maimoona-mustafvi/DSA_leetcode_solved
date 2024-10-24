/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *current = head;
        
        while(current != nullptr){
            ListNode *temp = current->next;
            if(temp != nullptr && current->val == temp->val){
                current->next = temp->next;
                delete temp;
            }
            else{
                current= current->next;
            }
        }
        return head;
    }
};