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
    ListNode* reverse(ListNode* head){
        ListNode* prev = nullptr;
        ListNode* curr = head;

        while(curr){
            ListNode* nxt = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nxt;
        }
        return prev;
    }
    ListNode* part(ListNode* head){
        ListNode* fast = head;
        ListNode* slow = head;

        while(fast->next!=nullptr && fast->next->next!=nullptr){
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* secondhalf = slow->next;
        slow->next=nullptr;
        return secondhalf;
    }
    void merge(ListNode* firsthead, ListNode* secondhead){
        ListNode* first = firsthead;
        ListNode* second = secondhead;
        while(second){
            ListNode* temp1 = first->next;
            ListNode* temp2 = second->next;

            first->next = second;
            second->next = temp1;

            first = temp1;
            second = temp2;
        }
    }
    void reorderList(ListNode* head) {
        ListNode* second = part(head);
        second = reverse(second);
        merge(head, second);
    }
};
