
class Solution {
public:
    bool hasCycle(ListNode* head) {
        unordered_set<int> visited;
        ListNode* curr = head;
        while(curr != nullptr){
            if(visited.count(curr->val))
                return true;
            visited.insert(curr->val);
            curr = curr->next;
        }
        return false;
    }
};
