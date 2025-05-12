#include <iostream>
#define MAX_SIZE 100
using namespace std;
class stack
{
private:
    int top;
    int arr[MAX_SIZE];
public:
    void stInit()                   // khoi tao mang rong
    {
        top = -1;
    };
    void push(int n);               // them phan tu n vao stack
    int pop();                      // Lay 1 phan tu trong stack
    bool isEmpty();                 // Kiem tra stack rong
    void isFull();                  // Stack Over Flow !!
    void display();                 // hien thi stack
};
void stack::push( int n)
{
    if (top>=MAX_SIZE-1)
        {
            isFull();
        }
        else{
            top++;
            arr[top] = n;
        }
};
int stack::pop()
{
    if (isEmpty())
    {
        return 1;
    }
    else{
        int x = arr[top];
        top--;
        return x;
    }
};

bool stack::isEmpty()
{
    return (top==-1);
}
void stack::isFull()
{
    {
        cout<<"Stack OverFlow"<<endl;
    };
}
void stack::display()
{
    {
        for (int i = 0; i <= top ; i++)
        {
            cout << arr [i]<< ", ";
        }
        
    }
}

int main(int argc, char *argv[])
{
    stack s;
    s.stInit();
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.display();
    //cout<<s.display()<<endl;
}
