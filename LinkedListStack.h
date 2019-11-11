//
// Created by Hayden Huynh on 10/30/19.
//

#ifndef STACK_LINKEDLISTSTACK_H
#define STACK_LINKEDLISTSTACK_H

#include "SingleLinkedList.h";

class LinkedListStack {

private:
    SingleLinkedList list;

    int size;

    SingleNode* top;

public:

    LinkedListStack();

    void push(int val);

    int pop();

    int getTop();

    bool isEmpty();

    void deleteStack();

};

LinkedListStack::LinkedListStack() {
    size = list.getSize();
    top = list.getPHead();
}

void LinkedListStack::push(int val) {
    list.insert(val, 0);
    top = list.getPHead();
    size = list.getSize();
}

int LinkedListStack::pop() {
    if (isEmpty()) {
        std::cout << "\nThe Stack is empty.\n";
    }
    else {
        int returnVal = top->val;
        list.deleteNode(0);
        top = list.getPHead();
        size = list.getSize();
        return returnVal;
    }
}

int LinkedListStack::getTop() {
    if (isEmpty()) {
        std::cout << "\nThe Stack is empty.\n";
    }
    else {
        return top->val;
    }
}

bool LinkedListStack::isEmpty() {
    return list.getSize() == 0;
}

void LinkedListStack::deleteStack() {
    top = NULL;
    size = 0;
    list.deleteList();
}

#endif //STACK_LINKEDLISTSTACK_H
