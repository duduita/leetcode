#include <bits/stdc++.h>
using namespace std;
typedef struct ListNode ListNode;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode *reverseList(ListNode *head)
{
    ListNode *new_head = new ListNode(0, head);
    new_head->next = head;
    ListNode *aux = head;
    if (!head)
        return head;
    while (head != nullptr)
    {
        aux = new ListNode(head->val, aux);
        head = head->next;
    }
    return new_head->next;
}