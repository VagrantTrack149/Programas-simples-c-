// C++ implementation for insertion Sort
// on a doubly linked list
#include <bits/stdc++.h>

using namespace std;

// Node of a doubly linked list
struct Node {
	int data;
	struct Node* atras, *siguiente;
};

// function to create and return a new node
// of a doubly linked list
struct Node* getNode(int data)
{
	// allocate node
	struct Node* newNode =
		(struct Node*)malloc(sizeof(struct Node));

	// put in the data
	newNode->data = data;
	newNode->atras = newNode->siguiente = NULL;
	return newNode;
}

// function to insert a new node in sorted way in
// a sorted doubly linked list
void sortedInsert(struct Node** head_ref, struct Node* newNode)
{
	struct Node* current;

	// if list is empty
	if (*head_ref == NULL)
		*head_ref = newNode;

	// if the node is to be inserted at the beginning
	// of the doubly linked list
	else if ((*head_ref)->data >= newNode->data) {
		newNode->siguiente = *head_ref;
		newNode->siguiente->atras = newNode;
		*head_ref = newNode;
	}

	else {
		current = *head_ref;

		// locate the node after which the new node
		// is to be inserted
		while (current->siguiente != NULL &&
			current->siguiente->data < newNode->data)
			current = current->siguiente;

		/*Make the appropriate links */

		newNode->siguiente = current->siguiente;

		// if the new node is not inserted
		// at the end of the list
		if (current->siguiente != NULL)
			newNode->siguiente->atras = newNode;

		current->siguiente = newNode;
		newNode->atras = current;
	}
}

// function to sort a doubly linked list using insertion sort
void insertionSort(struct Node** head_ref)
{
	// Initialize 'sorted' - a sorted doubly linked list
	struct Node* sorted = NULL;

	// Traverse the given doubly linked list and
	// insert every node to 'sorted'
	struct Node* current = *head_ref;
	while (current != NULL) {

		// Store siguiente for siguiente iteration
		struct Node* siguiente = current->siguiente;

		// removing all the links so as to create 'current'
		// as a new node for insertion
		current->atras = current->siguiente = NULL;

		// insert current in 'sorted' doubly linked list
		sortedInsert(&sorted, current);

		// Update current
		current = siguiente;
	}

	// Update head_ref to point to sorted doubly linked list
	*head_ref = sorted;
}

// function to print the doubly linked list
void printList(struct Node* head)
{
	while (head != NULL) {
		cout << head->data << " ";
		head = head->siguiente;
	}
}

// function to insert a node at the beginning of
// the doubly linked list
void push(struct Node** head_ref, int new_data)
{
	/* allocate node */
	struct Node* new_node =
		(struct Node*)malloc(sizeof(struct Node));

	/* put in the data */
	new_node->data = new_data;

	/* Make siguiente of new node as head and atrasious as NULL */
	new_node->siguiente = (*head_ref);
	new_node->atras = NULL;

	/* change atras of head node to new node */
	if ((*head_ref) != NULL)
		(*head_ref)->atras = new_node;

	/* move the head to point to the new node */
	(*head_ref) = new_node;
}

// Driver program to test above
int main()
{
	/* start with the empty doubly linked list */
	struct Node* head = NULL;

	// insert the following data
	push(&head, 9);
	push(&head, 3);
	push(&head, 5);
	push(&head, 10);
	push(&head, 12);
	push(&head, 8);

	cout << "Doubly Linked List Before Sortingn";
	printList(head);

	insertionSort(&head);

	cout << "nDoubly Linked List After Sortingn";
	printList(head);

	return 0;
}
