#include <iostream>
#include <string>
using namespace std;
// Generic Node Structure
template <typename T>
struct Node {
    T    data;
    Node<T>* next;
};

// Generic Circular Linked List Class
template <typename T>
class CircularLinkedList {
private:
    Node<T>* last;

public:
    CircularLinkedList() : last(nullptr) {}

    // Destructor to prevent memory leaks
    ~CircularLinkedList() {
        if (!last) return;
        Node<T>* current = last->next;
        while (current != last) {
            Node<T>* nextNode = current->next;
            delete current;
            current = nextNode;
        }
        delete last;
    }

    // Insert at the Beginning: O(1)
    void insertAtBeginning(T value) {
        Node<T>* newNode = new Node<T>{ value, nullptr };
        if (!last) {
            last = newNode;
            last->next = last;
        }
        else {
            newNode->next = last->next;
            last->next = newNode;
        }
    }

    // Insert at the End: O(1)
    void insertAtEnd(T value) {
        Node<T>* newNode = new Node<T>{ value, nullptr };
        if (!last) {
            last = newNode;
            last->next = last;
        }
        else {
            newNode->next = last->next;
            last->next = newNode;
            last = newNode;
        }
    }

    // Traversal: O(n)
    void display() {
        if (!last) {
            std::cout << "List is empty." << std::endl;
            return;
        }
        Node<T>* temp = last->next; // Start at Head
        do {
            std::cout << temp->data << " -> ";
            temp = temp->next;
        } while (temp != last->next);
        std::cout << "(Head)" << std::endl;
    }
    Node<T>* find(T value) {
        if (!last) return nullptr;
        Node<T>* curr = last->next;
        do {
            if (curr->data == value) return curr;
            curr = curr->next;
        } while (curr != last->next);
        return nullptr;
    }

    void tickhand(Node<T>*& hand, int ticks)
    {
        cout << "HAND STARTS AT: " << hand->data << endl;
        cout << "TICKING: " << ticks << " steps: ";
        for (int i = 0; i < ticks; i++)
        {
            if (hand != nullptr)
            {
                hand = hand->next;
                cout <<" " <<hand->data;
            }
        }

        cout << "\n hand is  at: " << hand->data << endl;

    }
};