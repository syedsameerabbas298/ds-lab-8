//#include<iostream>
//#include "circular.h"
//using namespace std;
//
//
//int main()
//{
//	CircularLinkedList<int>list;
//	list.insertAtEnd(1);
//	list.insertAtEnd(2);
//	list.insertAtEnd(3);
//	list.insertAtEnd(4);
//	list.insertAtEnd(5);
//	list.insertAtEnd(6);
//	list.insertAtEnd(7);
//	list.insertAtEnd(9);
//	list.insertAtEnd(10);
//	list.insertAtEnd(11);
//	list.insertAtEnd(12);
//	
//	list.display();
//	Node<int>* head = list.find(1);
//	list.tickhand(head, 6);
//
//	
//	list.tickhand(head, 6);
//
//	// user input
//	int starthour, ticknum = 0;
//	cout << "enter start hour: ";
//	cin >> starthour;
//	cout << "\nticking number: ";
//	cin >> ticknum;
//	head = list.find(starthour);
//	if(head)
//	list.tickhand(head, ticknum);
//}