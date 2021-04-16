package data_structures.linked_list;

/**
 * A class representing a linked list.
 */
public class LinkedList<T> {

  int len;
  Node<T> first_node;

  /**
   * A constructor for the linked list class.
   */
  public LinkedList() {
    this.len = 0;
    this.first_node = null;
  }

  /**
   * A method to push data to the linked list.
   * @param data data to be pushed to the linked list
   */
  public void Push(T data) {
    Node<T> node = new Node<>(data);
    node.next = this.first_node;
    this.first_node = node;
    this.len++;
  }

  /**
   * A method to pop data from the linked list.
   * @return the node removed from the linked list
   */
  public Node<T> Pop() {
    Node<T> node = new Node<>(this.first_node.data);
    this.first_node = this.first_node.next;
    return node;
  }

  public void PrintLinkedList() {
    Node<T> head = this.first_node;
    while (head != null) {
      System.out.print(head.data + " ");
      head = head.next;
    }
  }
}
