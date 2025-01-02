#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
	int val;
	Node *next;
	Node(int val)
	{
		this->val = val;
		this->next = NULL;
	}
};

void insert_at_any_pos(Node *&head, int idx, int val)
{
	Node *newnode = new Node(val);
	Node *tmp = head;
	for (int i = 1; i < idx; i++)
	{
		tmp = tmp->next;
	} // tmp at idx-1 (j idx dise tar ager ghore)
	newnode->next = tmp->next;
	tmp->next = newnode;
}

void print_linked_list(Node *head)
{
	Node *tmp = head;
	while (tmp != NULL)
	{
		cout << tmp->val << " ";
		tmp = tmp->next;
	}
	cout << endl;
}

int size_linked_list(Node *head)
{
	int cnt = 0;
	Node *tmp = head;
	while (tmp != NULL)
	{
		cnt++;
		tmp = tmp->next;
	}
	return cnt;
}
void insert_at_head(Node *&head, int val)
{
	Node *newnode = new Node(val);
	newnode->next = head;
	head = newnode;
}
void insert_at_tail(Node *&head, Node *&tail, int val)
{
	Node *newnode = new Node(val);
	if (head == NULL)
	{
		head = newnode;
		tail = newnode;
		return;
	}

	tail->next = newnode;
	// tail = tail->next;
	tail = newnode; // same as tail = tail->next;
}

int main()
{
	Node *head = NULL;
	Node *tail = NULL;

	int val;
	while (true)
	{
		cin >> val;
		if (val == -1)
		{
			break;
		}
		insert_at_tail(head, tail, val);
	}

	int idx;
	while (cin >> idx >> val)
	{ // for queries
		int sz = size_linked_list(head);
		if (idx > sz)
		{
			cout << "Invalid\n";
		}
		else if (idx == sz)
		{
			insert_at_tail(head, tail, val);
			print_linked_list(head);
		}
		else if (idx == 0)
		{
			insert_at_head(head, val);
			print_linked_list(head);
		}
		else
		{
			insert_at_any_pos(head, idx, val);
			print_linked_list(head);
		}
	}

	return 0;
}