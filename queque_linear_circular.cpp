#include <iostream>
#include <climits>
using namespace std;
class linearQueue {
    int front, rear, size;
    int *arr;
    public:
    linearQueue(int size)
    {
        front = rear = -1;
        this->size = size;
        arr = new int[size];
    }
    void enqueue(int value);
    int dequeue();
    void display();
};
void linearQueue::enqueue(int value) {
    if (rear == size - 1) {
        cout << "Queue is Full" << endl;
        return;
    }
    if (front == -1) {
        front = 0;
    }
    rear++;
    arr[rear] = value;
}
int linearQueue::dequeue() {
    if (front == -1) {
        cout << "Queue is Empty" << endl;
        return INT_MIN;
    }
    int data = arr[front];
    front++;
    if (front > rear) {
        front = rear = -1;
    }
    return data;
}
void linearQueue::display() {
    if (front == -1) {
        cout << "Queue is Empty" << endl;
        return;
    }
    for (int i = front; i <= rear; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
class circularQueue {
    int front, rear, size;
    int *arr;
    public:
    circularQueue(int size)
    {
        front = rear = -1;
        this->size = size;
        arr = new int[size];
    }
    void enqueue(int value);
    int dequeue();
    void display();
};
void circularQueue::enqueue(int value) {
    if ((front == 0 && rear == size - 1) || (rear == (front - 1) % (size - 1))) {
        cout << "Queue is Full" << endl;
        return;
    }
    if (front == -1) {
        front = rear = 0;
    }
    else if (rear == size - 1 && front != 0) {
        rear = 0;
    }
    else {
        rear++;
    }
    arr[rear] = value;
}
int circularQueue::dequeue() {
    if (front == -1) {
        cout << "Queue is Empty" << endl;
        return INT_MIN;
    }
    int data = arr[front];
    if (front == rear) {
        front = rear = -1;
    }
    else if (front == size - 1) {
        front = 0;
    }
    else {
        front++;
    }
    return data;
}
void circularQueue::display() {
    if (front == -1) {
        cout << "Queue is Empty" << endl;
        return;
    }
    if (rear >= front) {
        for (int i = front; i <= rear; i++) {
            cout << arr[i] << " ";
        }
    }
    else {
        for (int i = front; i < size; i++) {
            cout << arr[i] << " ";
        }
        for (int i = 0; i <= rear; i++) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
}
int main() {
    linearQueue q(5);
    cout<<"Linear Queue"<<endl;
    q.enqueue(3);
    q.enqueue(2);
    q.enqueue(4);
    q.enqueue(7);
    q.enqueue(9);
    q.display();
    cout <<"deque "<< q.dequeue() << endl;
    q.display();
    cout<<endl;

    circularQueue cq(5);
    cout<<"Circular Queue"<<endl;
    cq.enqueue(3);
    cq.enqueue(2);
    cq.enqueue(4);
    cq.enqueue(7);
    cq.enqueue(9);
    cq.display();
    cout <<"deque "<< cq.dequeue() << endl;
    cq.display();
    return 0;
}