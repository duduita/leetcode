#include <bits/stdc++.h>
using namespace std;

typedef struct ListNode ListNode;
struct ListNode {
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode *mergeTwoLists(ListNode *l1, ListNode *l2) {
  ListNode *new_head = new ListNode;
  ListNode *tail = new_head;

  while (l1 && l2) {
    if (l1->val < l2->val) {
      tail->next = l1;
      l1 = l1->next;
    } else {
      tail->next = l2;
      l2 = l2->next;
    }
    tail = tail->next;
  }

  tail->next = l1 ? l1 : l2;
  return new_head->next;
}

int main() {
  ListNode *head = NULL;
  ListNode *second = NULL;
  ListNode *third = NULL;

  ListNode *head2 = NULL;
  ListNode *second2 = NULL;
  ListNode *third2 = NULL;

  head = new ListNode();
  second = new ListNode();
  third = new ListNode();
  head2 = new ListNode();
  second2 = new ListNode();
  third2 = new ListNode();

  head->val = 1;
  head->next = second;
  head2->val = 1;
  head2->next = second2;

  second->val = 2;
  second->next = third;
  second2->val = 3;
  second2->next = third2;

  third->val = 3;
  third->next = NULL;
  third2->val = 4;
  third2->next = NULL;

  /*   while (head != NULL) {
      cout << head->val << " -> ";
      head = head->next;
    }
    cout << "\n";
    while (head2 != NULL) {
      cout << head2->val << " -> ";
      head2 = head2->next;
    } */

  ListNode *res;
  res = mergeTwoLists(head, head2);
  while (res != NULL) {
    cout << res->val << " -> ";
    res = res->next;
  }
  return 0;
}