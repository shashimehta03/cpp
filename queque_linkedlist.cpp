#include <iostream>
#include <climits>
using namespace std;
class Node {
    public:
    int data;
    Node *next;
};
class Queue {
    Node *front, *rear;
    public:
    Queue()
    {
        front = rear = NULL;
    }
    void enqueue(int value);
    int dequeue();
    void display();
    int top();
};
void Queue::enqueue(int value) {
    Node *temp = new Node();
    temp->data = value;
    if (front == NULL) {
        front = rear = temp;
        return;
    }
    rear->next = temp;
    rear = temp;
}
int Queue::dequeue() {
    if (front == NULL) {
        cout << "Queue is Empty" << endl;
        return INT_MIN;
    }
    Node *temp = front;
    front = front->next;
    if (front == NULL) {
        rear = NULL;
    }
    int data = temp->data;
    delete temp;
    return data;
}
void Queue::display() {
    if (front == NULL) {
        cout << "Queue is Empty" << endl;
        return;
    }
    Node *temp = front;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int Queue::top() {
    if (front == NULL) {
        cout << "Queue is Empty" << endl;
        return INT_MIN;
    }
    return front->data;
}
int main() {
    Queue q;
    q.enqueue(6);
    q.enqueue(7);
    q.enqueue(8);
    q.enqueue(9);
    cout<<"Queue: ";
    q.display();
    cout << q.dequeue() << " dequeued from queue" << endl;
    cout<<"Queue after dequeue : "<<endl;
    q.display();
    cout<<"top element: "<<q.top()<<endl;
    return 0;
}