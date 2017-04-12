#include <iostream>
using namespace std;

struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {};
};
class Solution {
public:
	bool hasCycle(ListNode *head) {
		if (head == NULL) { return head; }
		ListNode *slow;
		ListNode *fast;
		slow = head;
		fast = head;
		while (fast->next && fast->next->next) {
			slow = slow->next;
			fast = fast->next->next;
			if (slow->val == fast->val) {
				return true;
			}
		}
		return false;
	}
};
