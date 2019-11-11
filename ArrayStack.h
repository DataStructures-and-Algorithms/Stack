//
// Created by Hayden Huynh on 10/30/19.
//

#ifndef STACK_ARRAYSTACK_H
#define STACK_ARRAYSTACK_H

#include <iostream>

class ArrayStack {

private:
    int* arr;

    int size;

    int top;

public:

    ArrayStack(int size);

    void push(int val);

    int pop();

    int getTop();

    bool isFull();

    bool isEmpty();

    void deleteStack();

};

ArrayStack::ArrayStack(int size) {
    this->size = size;
    arr = new int[size];
    top = -1;
}

void ArrayStack::push(int val) {
    if(isFull()) {
        std::cout << "\nThe Stack is full.\n";
    }
    else {
        top++;
        arr[top] = val;
    }
}

int ArrayStack::pop() {
    if (isEmpty()) {
        std::cout << "\nThe Stack is empty.\n";
    }
    else {
        top--;
        return arr[top+1];
    }
}

int ArrayStack::getTop() {
    if (isEmpty()) {
        std::cout << "\nThe Stack is empty.\n";
    }
    else {
        return arr[top];
    }
}

bool ArrayStack::isFull() {
    return top+1 == size;
}

bool ArrayStack::isEmpty() {
   return top == -1;
}

void ArrayStack::deleteStack() {
    size = 0;
    top = -1;
    delete[] arr;
}

#endif //STACK_ARRAYSTACK_H
