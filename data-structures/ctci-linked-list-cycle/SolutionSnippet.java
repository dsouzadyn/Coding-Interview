/*
 	Node template:

	class Node {
		int data;
		Node next;
	}
*/

// Snippet solution
// I'm using Floyd's cylce algorithm.
boolean hasCycle(Node head) {
	Node slow = head;
	Node fastOne = head;
	Node fastTwo = head;
	while(slow != null && fastOne != null && fastTwo != null) {
		fastOne = fastTwo.next;
		fastTwo = fastOne.next;
		if(slow == fastOne || slow == fastTwo) return true;
		slow = slow.next;
	}
	return false;
}
