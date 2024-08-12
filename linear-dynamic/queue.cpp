#include<iostream>

class Queue {
    int *arr;
    int front;
    int rear;
    int size;
    
public:
    Queue(int size) {
        this -> size = size;
        arr = new int[size];
        front = -1;
        rear = -1;
    }
    ~Queue() {
        delete[] arr;
    }
    bool isEmpty();
    bool isFull();
    void enqueue(int n);
    int dequeue();
    int peek();
    void display();
};

bool Queue::isEmpty() {
    return front == -1 || front > rear;
}

bool Queue::isFull() {
    return rear == size - 1;
}

void Queue::enqueue(int n) {
    if(isFull()) {
        std::cout << "Queue overflow" << std::endl;
        return;
    }
    if(isEmpty()) {
        front++;
    }
    arr[++rear] = n;
    std::cout << "Enqueued " << n << std::endl;
}

int Queue::dequeue() {
    if(isEmpty()) {
        std::cout << "Queue underflow" << std::endl;
        return -1;
    }
    return arr[front++];
}

int Queue::peek() {
    if(isEmpty()) {
        std::cout << "Queue is empty" << std::endl;
        return -1;
    }
    return arr[front];
}

void Queue::display() {
    if(isEmpty()) {
        std::cout << "Queue is empty" << std::endl;
        return;
    }
    for(int i = front; i <= rear; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main(){
    Queue my_queue(5);
    std::cout << my_queue.isEmpty() <<std::endl;
    std::cout << my_queue.isFull() <<std::endl;
    my_queue.enqueue(10);
    my_queue.enqueue(20);
    my_queue.enqueue(30);
    my_queue.enqueue(40);
    my_queue.enqueue(50);
    my_queue.enqueue(60);
    std::cout << my_queue.dequeue() << std::endl;
    std::cout << my_queue.peek() << std::endl;
    my_queue.display();

    return 0;
}