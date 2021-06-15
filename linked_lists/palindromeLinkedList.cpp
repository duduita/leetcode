ListNode *temp;
bool check(ListNode *head) {
  if (head == NULL)
    return true;
  bool res = check(head->next) && head->val == temp->val;
  temp = temp->next;
  return res;
}

bool isPalindrome(ListNode *head) {
  temp = head;
  return check(head);
}