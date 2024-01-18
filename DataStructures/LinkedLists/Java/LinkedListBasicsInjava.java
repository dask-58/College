public class Node {
    public int data;
    public Node next;

    // constructor
    public Node(int value) {
        this.data = value;
        this.next = null;
    }
}

public class LinkedList {
    public static void insertNodeAtHead(Node head, int value) {
        Node temp = new Node(value);
        temp.next = head.next;
        head.next = temp;
    }

    public static void insertNodeAtTail(Node head, int value) {
        Node newNode = new Node(value);

        if (head.next == null) {
            head.next = newNode;
            return;
        }

        Node temp = head.next;
        while (temp.next != null) {
            temp = temp.next;
        }

        temp.next = newNode;
    }

    public static void insertNodeAtPosition(Node head, int value, int pos) {
        Node newNode = new Node(value);

        if (pos == 0 || head.next == null) {
            newNode.next = head.next;
            head.next = newNode;
            return;
        }

        Node temp = head.next;
        for (int i = 0; i < pos - 1 && temp.next != null; i++) {
            temp = temp.next;
        }

        newNode.next = temp.next;
        temp.next = newNode;
    }

    public static void display(Node head) {
        Node temp = head.next;
        while (temp != null) {
            System.out.print(temp.data + " ");
            temp = temp.next;
        }
        System.out.println();
    }

    public static void main(String[] args) {
        Node node1 = new Node(0);

        insertNodeAtHead(node1, 100);
        insertNodeAtHead(node1, 49);
        insertNodeAtHead(node1, 50);
        insertNodeAtHead(node1, 37);
        insertNodeAtHead(node1, 69);

        insertNodeAtTail(node1, 420);

        insertNodeAtPosition(node1, 900, 4);
        display(node1);

        // Deallocate memory to avoid memory leaks
        Node temp;
        while (node1.next != null) {
            temp = node1.next;
            node1.next = node1.next.next;
            temp = null;
        }
    }
}
