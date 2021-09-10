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

int main()
{
    ListNode *head;
    ListNode *new_node = nullptr;
    for (int i = 0; i < 6; i++)
    {
        new_node = new ListNode(i, new_node);
    }

    head = new_node;

    // while (head != nullptr)
    // {
    //     cout << head->val;
    //     head = head->next;
    // }

    ListNode *rev_list = nullptr;

    while (head != nullptr)
    {
        rev_list = new ListNode(head->val, rev_list);
        head = head->next;
    }

    head = rev_list;
    while (head != nullptr)
    {
        cout << head->val;
        head = head->next;
    }

    return 0;
}