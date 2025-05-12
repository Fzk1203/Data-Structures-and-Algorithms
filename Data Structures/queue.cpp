#include <iostream>
#define MAX_SIZE 100
using namespace std;

class queue
{
private:
    int arr[MAX_SIZE];
    int front, rear;
public:
    void qInit()
    {
        front = -1;
        rear = -1;
    };
    void enQueue(int data);         //Them 1 phan tu vao hang doi
    int deQueue();                  //Lay ra 1 phan tu trong hang doi
    bool isEmpty();                 //Kiem tra hang doi rong
    bool isFull();                  //Kiem tra hang doi day
    void display();                 //In hang doi ra man hinh
};

void queue::enQueue(int data)
{
    if (isFull())
    {
        cout<<"Queue is Full"<<endl;
        return;
    }else if (isEmpty())
    {
        front=rear=0;
    }else{
        rear++;
    }
    arr[rear]=data;
}

int queue::deQueue()
{
    if (isEmpty())
    {
        cout<<"Queue is Empty"<<endl;
        return -1; 
    }else if (front==rear)
    {
        int data = arr[front];
        front=rear=-1;
        return data;
    }
    else
    {
        int data = arr[front];
        front++;
        return data;
    }
}

bool queue::isEmpty()
{
    return (front==-1&rear==-1);
}

bool queue::isFull()
{
    return (rear==MAX_SIZE-1);
}

void queue::display()
{   
    if(isEmpty())
    {
        cout<<"Queue is Empty"<<endl;
    }else
    {
        for (int i = front; i <= rear; i++)
        {
            cout<<arr[i]<<' ';
        }
        cout<<endl;
    }
}

int main(int argc, char *argv[])
{
    queue q;
    q.qInit();
    q.enQueue(1);
    q.enQueue(2);
    q.enQueue(3);
    //cout<<q.deQueue()<<endl;
    q.display();
}
