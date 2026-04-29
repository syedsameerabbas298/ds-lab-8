#include<iostream>
#include "doublelinklist.h"
int main() {
    DoublyLinkedList<string> gallery;
    gallery.insertEnd("Sunset.jpg");
    gallery.insertEnd("Mountain.jpg");
    gallery.insertEnd("Beach.jpg");
    gallery.insertEnd("Forest.jpg");
    gallery.insertEnd("City.jpg");

    // 1. Display Gallery
    cout << "Gallery: ";
    gallery.display();
    cout << endl;

    // 2. Start at Head
    DNode<string>* current = gallery.getHead();
    cout << "Viewing: " << current->data << "  [start]\n" << endl;

    // 3. Swipe Right until the end
    gallery.nextImage(current);
    gallery.nextImage(current);
    gallery.nextImage(current);
    gallery.nextImage(current);
    gallery.nextImage(current); // Should trigger "last image"
    cout << endl;

    // 4. Swipe Left until the beginning
    gallery.prevImage(current);
    gallery.prevImage(current);
    gallery.prevImage(current);
    gallery.prevImage(current);
    gallery.prevImage(current); // Should trigger "first image"

    return 0;
}