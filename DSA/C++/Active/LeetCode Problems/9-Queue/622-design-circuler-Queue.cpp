// link - https://leetcode.com/problems/design-circular-queue/
#include <iostream>
using namespace std;

class MyCircularQueue {
private:
    int *arr;
    int front;
    int rear;
    int size;

public:
    MyCircularQueue(int k) {
        size = k;
        arr = new int[size];
        front = rear = -1;
    }

    bool enQueue(int value) {
        if (isFull()) {
            return false;
        }
        if (front == -1) {
            front = rear = 0;
        } else if (rear == size - 1 && front != 0) {
            rear = 0;
        } else {
            rear++;
        }
        arr[rear] = value;
        return true;
    }

    bool deQueue() {
        if (isEmpty()) {
            return false;
        }
        if (front == rear) {
            front = rear = -1;
        } else if (front == size - 1) {
            front = 0;
        } else {
            front++;
        }
        return true;
    }

    int Front() {
        if (isEmpty()) {
            return -1;
        }
        return arr[front];
    }

    int Rear() {
        if (isEmpty()) {
            return -1;
        }
        return arr[rear];
    }

    bool isEmpty() {
        return front == -1;
    }

    bool isFull() {
        return (front == 0 && rear == size - 1) || (rear + 1 == front);
    }
};

int main() {
    MyCircularQueue queue(3);

    cout << "Enqueue 1: " << (queue.enQueue(1) ? "Success" : "Failed") << endl;
    cout << "Enqueue 2: " << (queue.enQueue(2) ? "Success" : "Failed") << endl;
    cout << "Enqueue 3: " << (queue.enQueue(3) ? "Success" : "Failed") << endl;
    cout << "Enqueue 4: " << (queue.enQueue(4) ? "Success" : "Failed") << endl;

    cout << "Front: " << queue.Front() << endl;
    cout << "Rear: " << queue.Rear() << endl;

    cout << "Is Full: " << (queue.isFull() ? "Yes" : "No") << endl;

    cout << "Dequeue: " << (queue.deQueue() ? "Success" : "Failed") << endl;
    cout << "Front: " << queue.Front() << endl;
    cout << "Rear: " << queue.Rear() << endl;

    cout << "Enqueue 4: " << (queue.enQueue(4) ? "Success" : "Failed") << endl;
    cout << "Front: " << queue.Front() << endl;
    cout << "Rear: " << queue.Rear() << endl;

    cout << "Is Empty: " << (queue.isEmpty() ? "Yes" : "No") << endl;

    cout << "Dequeue: " << (queue.deQueue() ? "Success" : "Failed") << endl;
    cout << "Dequeue: " << (queue.deQueue() ? "Success" : "Failed") << endl;
    cout << "Dequeue: " << (queue.deQueue() ? "Success" : "Failed") << endl;
    cout << "Dequeue: " << (queue.deQueue() ? "Success" : "Failed") << endl;

    cout << "Is Empty: " << (queue.isEmpty() ? "Yes" : "No") << endl;
    cout << "Front: " << queue.Front() << endl;
    cout << "Rear: " << queue.Rear() << endl;

    return 0;
}
