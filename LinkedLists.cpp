#include <iostream>

template <typename T>
class Node{
public:
    T data;
    Node<T> *next;
    Node<T> (T x) {
        data = x;
        next = NULL;
    }
};

template <typename T>
class LinkedList{
public:
    Node<T> *head;

    //function to get last node
    Node<T> *getLastNode() {
        Node<T> *ptr = head;
        while (ptr->next != NULL) ptr = ptr->next;
        return ptr;
    }

    //function to add node at front
    void addFront(Node<T> *n) {
        n->next = head;
        head = n;
    }
    //function to add node at end
    void addEnd(Node<T> *n) {
        if(head == NULL) {
            head = n;
            n->next = NULL;
        }
        else {
            Node<T> *n2 = getLastNode();
            n2->next = n;
        }
    }

    // function to search value
    Node<T> *search(T data) {
        Node<T> *ptr = head;
        while(ptr != NULL && data != ptr->data){
            ptr->next;
        }
        return ptr;
    }

    //function to delete node
    Node<T>* deleteNode(T data) {
        Node<T> *searchVal = search(data);
        Node<T> *ptr = head;
        if (ptr == searchVal) {
            head = searchVal->next;
            return searchVal;
        }
        else {
            while (ptr->next != searchVal) {
                ptr = ptr->next;
                return searchVal;
            }
        }
    }

    void printList() {
        Node<T> *ptr = head;
        if (ptr != NULL) {
            std::cout << ptr->data;
            ptr = ptr->next;
            while(ptr != NULL) {
                std::cout << "->" << ptr->data ;
                ptr = ptr->next;
            }
        } 
    }


    LinkedList() : head(NULL){}
};

int main() {
    LinkedList<int> L;

    Node<int> *n1 = new Node<int>(9);
    Node<int> *n2 = new Node<int>(4);
    Node<int> *n3 = new Node<int>(1);
    Node<int> *n4 = new Node<int>(10);

    L.addFront(n1);
    L.addEnd(n2);
    L.addEnd(n3);
    L.addFront(n4);

    L.printList();

    delete [] n1;
    delete [] n2;
    delete [] n3;
    delete [] n4;
    
    return 0;
}