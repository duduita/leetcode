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

ListNode *deleteDuplicates(ListNode *head)
{
    ListNode *res = head;
    if (!head or head->next == nullptr)
        return head;
    while (head->next != nullptr)
    {
        if (head->val == head->next->val)
        {
            head->next = head->next->next;
        }
        else
            head = head->next;
    }
    return res;
}