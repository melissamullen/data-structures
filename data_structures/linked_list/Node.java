package data_structures.linked_list;

/**
 * A class representing a node of a linked list.
 */
public class Node<T> {

  public T data;
  public Node<T> next;

  /**
   * A constructor for the Node class.
   * @param data data to be included in the node
   */
  public Node(T data) {
    this.data = data;
    this.next = null;
  }

}
