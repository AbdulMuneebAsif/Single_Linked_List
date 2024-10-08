# Single Linked List

This project implements a single linked list data structure in C++. It provides a basic set of functionalities required to manipulate the linked list, including adding, inserting, and printing nodes.

## Features

- **Insert at Head**: Add a node at the beginning of the list.
- **Insert at Tail**: Add a node at the end of the list.
- **Insert at Target**: Insert a node with specific data after a node with a given value.
- **Print List**: Print all the elements in the linked list.

## Classes

### Node
The `Node` class represents an individual element in the linked list.

#### Methods:
- **Constructor**: Initializes the node with a given value.
- **getData**: Returns the data stored in the node.
- **getNext**: Returns the pointer to the next node.
- **setNext**: Sets the pointer to the next node.

### List
The `List` class manages the linked list operations.

#### Methods:
- **insertAtHead(int value)**: Inserts a new node with the given value at the head of the list.
- **insertAtTail(int value)**: Inserts a new node with the given value at the tail of the list.
- **insertAtTarget(int value, int data)**: Inserts a new node with `data` after the node containing `value`.
- **print()**: Prints all the elements in the list.

## Getting Started

### Prerequisites
- C++ compiler that supports C++23 standard.
- CMake (for building the project).

### Building the Project
1. Clone the repository:
    ```sh
    git clone <repository-url>
    cd single-linked-list
    ```

2. Create a build directory and navigate to it:
    ```sh
    mkdir build
    cd build
    ```

3. Generate the build system files using CMake:
    ```sh
    cmake ..
    ```

4. Build the project:
    ```sh
    make
    ```

### Running the Program
After building the project, you can run the executable:

```sh
./single_linked_list
```

## Usage Example

Below is an example of how you can use the `List` class:

```c++
#include <iostream>

int main() {
    List list;

    list.insertAtHead(1);
    list.insertAtTarget(1, 35);
    list.insertAtTail(32);
    list.insertAtTail(45);

    list.print(); // Output: 1 -> 35 -> 32 -> 45 -> nullptr

    return 0;
}
```

## License
This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.

## Acknowledgments
- This implementation is based on basic principles of linked lists used in data structures.

## Author
AI Assistant
