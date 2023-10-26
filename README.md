# LinkedList
<h2>Introduction</h2>
We'll be going deep into linked lists in C++ in this project. In this project, we will examine constructors, observers, transformers, and iterators in order to comprehend the fundamentals of generating linked structures and how to implement them. We aim to finish the incomplete C++ program that we started with by producing the .cpp file Linked_List.cpp that defines the Linked_List class functions.


<h2>Methodology</h2>

The project's primary goal was to put in place a basic linked list data structure. Basic operations like insertion, deletion, and searching are available in a linked list, along with useful functions like determining the list's length, printing it, and determining if it is empty or full.

- A ListItem structure with an integer key, a floating-point data value (theData), and a pointer (next) pointing to the item after it is used to represent each item in the linked list.
- A pointer, or head, to the list's first entry, can be found in the Linked_List class.


**Constructor (Linked_List()) and Destructor (~Linked_List()):**
- The constructor sets the list's head to nullptr, which denotes an empty list.
- The destructor makes sure that the ClearList() function is used to deallocate any dynamically allocated memory related to the list.

**Operations:**
- Insert(int key, float f) appends a new entry to the end of the list with the supplied key and data value.
- Delete(int key): Deletes the item from the list that has the given key.
- Search(int key, float *retVal): This function uses the supplied key to find an item and uses the pointer retVal to return the data value.
- The function ListLength() yields the total number of entries in the list.
- isEmpty(): Determines whether the list is empty.
- isFull(): Determines if the list is complete. Unless system memory is used up, it is presumed that the list will never be full in this approach.
- PrintList(): Displays the list's contents.


<h2>Conclusion</h2>
As we complete this project, we have gained a greater understanding of linked lists and how they are used in C++. We have improved our coding and testing abilities by defining the methods of the Linked_List class in Linked_List.cpp and creating a thorough test plan. This understanding makes us better equipped to work with data structures and algorithms.


