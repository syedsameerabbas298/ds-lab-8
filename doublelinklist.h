#include <iostream>
#include <string>
using namespace std;

template <typename T>
struct DNode {
    T data;
    DNode<T>* next;
    DNode<T>* prev;
};

template <typename T>
class DoublyLinkedList {
private:
    DNode<T>* head;
    DNode<T>* tail;

public:
    DoublyLinkedList() : head(nullptr), tail(nullptr) {}

    void insertEnd(T value) {
        DNode<T>* newNode = new DNode<T>{ value, nullptr, nullptr };
        if (!head) {
            head = tail = newNode;
        }
        else {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }

    DNode<T>* getHead() { return head; }

    void display() {
        DNode<T>* temp = head;
        while (temp) {
            cout << temp->data << (temp->next ? " <-> " : "");
            temp = temp->next;
        }
        cout << endl;
    }

 
    void nextImage(DNode<T>*& cur) {
        if (cur->next != nullptr) {
            cur = cur->next;
            cout << "next -> Viewing: " << cur->data << endl;
        }
        else {
            cout << "next -> Already at the last image." << endl;
        }
    }

    void prevImage(DNode<T>*& cur) {
        if (cur->prev != nullptr) {
            cur = cur->prev;
            cout << "prev -> Viewing: " << cur->data << endl;
        }
        else {
            cout << "prev -> Already at the first image." << endl;
        }
    }
};