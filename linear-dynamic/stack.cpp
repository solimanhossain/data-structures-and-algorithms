#include<iostream>

class Stack {
    int *arr;
    int top;
    int size;

public:
    Stack(int size) {
        this->size = size;
        arr = new int[size];
        top = -1;
    }
    ~Stack() {
        delete[] arr;
    }
    bool isEmpty();
    bool isFull();
    void display();
    void push(int n);
    int pop();
    int peek();
};

bool Stack::isEmpty() {
    return top == -1;
}

bool Stack::isFull() {
    return top == size - 1;
}

void Stack::push(int n) {
    if(isFull()) {
        std::cout << "Stack overflow" << std::endl;
        return;
    }
    arr[++top] = n;
    std::cout << "Pushed " << n << std::endl;
}

int Stack::pop() {
    if(isEmpty()) {
        std::cout << "Stack underflow" << std::endl;
        return -1;
    }
    return arr[top--];
}

int Stack::peek() {
    if(isEmpty()) {
        std::cout << "Stack is empty" << std::endl;
        return -1;
    }
    return arr[top];
}

void Stack::display() {
    if(isEmpty()) {
        std::cout << "Stack is empty" << std::endl;
        return;
    }
    for(int i = 0; i <= top; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    Stack my_stack(5);
    std::cout << my_stack.isFull() <<std::endl;
    std::cout << my_stack.isEmpty() <<std::endl;
    my_stack.display();
    my_stack.pop();
    my_stack.push(10);
    my_stack.push(20);
    my_stack.push(30);
    my_stack.push(40);
    my_stack.push(50);
    my_stack.push(60);
    std::cout << my_stack.peek() << std::endl;
    my_stack.display();
    
    return 0;
}