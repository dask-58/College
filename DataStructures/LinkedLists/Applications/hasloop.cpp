//Assuming the basic Structure of any LinkedList with 
// a class Node with data and next pointer.

bool CheckifLoopExists (Node *head) {
	Node *slow = head;
	Node *fast = head;

	while (fast and fast -> next != NULL) { 
		fast = fast -> next -> next;
		slow = slow -> next;

		if (fast == slow) { 
			return true;
		}
	}
	return false;
}
