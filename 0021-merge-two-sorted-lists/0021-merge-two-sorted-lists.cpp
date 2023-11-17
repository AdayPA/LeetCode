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
    

ListNode *mergeTwoLists(ListNode *list1, ListNode *list2) {
    ListNode *ordered_list = new ListNode(0);
    ListNode *current = ordered_list;

    while (list1 && list2) {
        if (list1->val < list2->val) {
            current->next = new ListNode(list1->val);
            list1 = list1->next;
        } else {
            current->next = new ListNode(list2->val);
            list2 = list2->next;
        }
        current = current->next;
    }

    // Agregar los nodos restantes de la lista no vacía
    if (list1) {
        current->next = list1;
    } else if (list2) {
        current->next = list2;
    }

    return ordered_list->next;
}
};