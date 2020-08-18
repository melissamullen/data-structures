import data_structures.linked_list.*;

/**
 * A class representing an example of a linked list implementation.
 */
public class Example {

  /**
   * A constructor for the Example class.
   */
  public Example() {};

  /**
   * Main method in Example class instantiating an linked list of integers.
   */
  public static void main(String[] args) {

    // Create linked list
    LinkedList<Integer> list = new LinkedList<Integer>();

    // Push integer data to linked list
    list.Push(1);
    list.Push(2);
    list.Push(5);
    list.Pop();
    list.Push(7);

    // Print linked list
    list.PrintLinkedList();

  }

}
