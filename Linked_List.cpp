#include "Linked_List.h" // Include the header file for the class

Linked_List::Linked_List()
{
    head = nullptr; // Initialize the head pointer to nullptr
}

Linked_List::~Linked_List()
{
    ClearList(); // Call ClearList in the destructor to free any allocated memory
}

void Linked_List::ClearList()
{
    ListItem *current = head;
    while (current != nullptr)
    {
        ListItem *temp = current;
        current = current->next;
        delete temp;
    }
    head = nullptr; // Set the head pointer to nullptr
}

bool Linked_List::Insert(int key, float f)
{
    ListItem *newItem = new ListItem;
    newItem->key = key;
    newItem->theData = f;
    newItem->next = nullptr;

    if (head == nullptr)
    {
        // If the list is empty, set the new item as the head
        head = newItem;
    }
    else
    {
        // Find the last item in the list and add the new item
        ListItem *current = head;
        while (current->next != nullptr)
        {
            current = current->next;
        }
        current->next = newItem;
    }

    return true;
}

bool Linked_List::Delete(int key)
{
    if (head == nullptr)
    {
        // List is empty
        return false;
    }

    if (head->key == key)
    {
        // If the head item matches the key, remove the head
        ListItem *temp = head;
        head = head->next;
        delete temp;
        return true;
    }

    ListItem *current = head;
    while (current->next != nullptr)
    {
        if (current->next->key == key)
        {
            ListItem *temp = current->next;
            current->next = current->next->next;
            delete temp;
            return true;
        }
        current = current->next;
    }

    return false; // Key not found
}

bool Linked_List::Search(int key, float *retVal)
{
    ListItem *current = head;
    while (current != nullptr)
    {
        if (current->key == key)
        {
            *retVal = current->theData;
            return true;
        }
        current = current->next;
    }
    return false; // Key not found
}

int Linked_List::ListLength()
{
    int length = 0;
    ListItem *current = head;
    while (current != nullptr)
    {
        length++;
        current = current->next;
    }
    return length;
}

bool Linked_List::isEmpty()
{
    return head == nullptr;
}

bool Linked_List::isFull()
{
    // Assuming the list is not limited in size
    return false;
}

void Linked_List::PrintList()
{
     ListItem *temp;

     cout << "\n\nItems in the List\n";
     cout << "-----------------------------------------------------------\n";
     cout << "Key\t\tData\n";
     cout << "-----------------------------------------------------------\n";

     if(head == NULL)     // Report no items in the list
     {
          cout << "\t List is currently empty.\n";
     }
     else
     {
          temp = head;
          while(temp != NULL)
          {
               cout << temp->key << "\t\t" << temp->theData << "\n";
               temp=temp->next;
          }
     }
     cout << "-----------------------------------------------------------\n\n";
}

