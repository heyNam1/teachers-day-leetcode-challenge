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
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {         
        ListNode dummy(0);
        dummy.next = head;
        ListNode* current = &dummy;
        while(current->next){
            if(current->next->val == val){
                current->next = current->next->next;
            }else{
                current = current->next;
            }
        }
        return dummy.next;
    }
};