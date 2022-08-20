#include <iostream>
using namespace std;
class Node
{
private:
    int data;
    Node *next;

public:
    Node() {}
    Node(int data, Node *next = NULL)
    {
        setData(data);
        setNext(next);
    }
    void setData(int data)
    {
        this->data = data;
    }
    void setNext(Node *next)
    {
        this->next = next;
    }
    int getData()
    {
        return data;
    }
    Node *getNext()
    {
        return next;
    }
};
class Linkedlist
{
private:
    Node *head;

public:
    bool isEmpty()
    {
        while (head->getNext() == NULL)
        {
            return true;
        }
        return false;
    }
    int insertAtBegin(int val)
    {
        if (isEmpty())
        {
            head = new Node(val);
        }
        Node *t = new Node(val);
        t->setNext(head);
        head = t;
        return head->getData();
    }
    void count()
    {
        int count = 0;
        while (head->getNext() != NULL)
        {
            head = head->getNext();
            count++;
        }
        cout << count;
    }
    void insertAtLast(int val)
    {
        Node *t = new Node(val);
        if (isEmpty())
        {
            head = t;
        }
        else
        {
            Node *t1 = head;
            while (t1->getNext() != NULL)
            {
                t1 = t1->getNext();
            }
            t1->setData(val);
            cout << t1->getData();
        }
    }
    void getFirstElement()
    {
        cout<< head->getData();
    }
    int getLastElement()
    {
        if(!isEmpty())
        {
            while(head->getNext() != NULL){
                head = head->getNext();
            }
           return head->getData();
        }
    }
};
int main()
{
    Linkedlist l;
    cout << l.isEmpty() << endl;
    for (int i = 0; i < 5; i++)
        cout << l.insertAtBegin(100 + i) << endl;

    l.insertAtLast(700);
    cout<<endl;
    cout << l.isEmpty() << endl;
    l.count();
    cout<<endl;
    l.getFirstElement();
    cout<<endl;
    cout<<l.getLastElement();
    return 0;
}
