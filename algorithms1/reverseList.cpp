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
    ListNode *res;
    res = NULL;
    if (head == NULL)
        return head;
    while (head != NULL)
    {
        res = new ListNode(head->val, res);
        head = head->next;
    }
    return res;
}

int main()
{
    ListNode *head;
    for (int i = 0; i < 6; i++)
    {
        ListNode *new_node = new ListNode(i);
        new_node->next = head;
        head = new_node;
    }

    head = reverseList(head);

    while (head->next != nullptr)
    {
        cout << head->val;
        head = head->next;
    }

    return 0;
}