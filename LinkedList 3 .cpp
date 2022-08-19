#include<iostream>
using namespace std;
class Node
{
    private:
        int data;
        Node * next;
    public:
        Node(){}
        Node(int data , Node * next = NULL)
        {
            setData(data);
            setNext(next);
        }
        void setData(int data)
        {
            this->data = data;
        }
        void setNext(Node * next)
        {
            this->next=next;
        }
        int getData()
        {
            return data;
        }
        Node* getNext()
        {
            return next;
        }
};
class Linkedlist
{
    private:
        Node * head;
    public:
        bool isEmpty()
        {
            if(head == NULL)
            {
                return true;
            }
            return false;

        }
        int insertAtBegin(int val)
        {
            if(isEmpty())
            {
                head = new Node(val);
            }
            Node * t = new Node(val);
            t->setNext(head);
            head = t ;
            return head->getData();
        }
        void getLenght()
        {
          if(!isEmpty())
          {
            int count =0;
            Node* t = head;
            while(t != NULL)
            {
                t = t->getNext();
                count++;
            }
            cout<< count;
          }   
        }
        void insertAtLast(int val)
        {
            Node * t = new Node(val);
            if(isEmpty())
            {
                head = t;
            }
            else{
            Node * t1 = head;
            while(t1->getNext() != NULL)
            {
                t1 = t1->getNext();
            }
           t1->setData(val);
            cout<<t1->getData();
        }
        }
        bool removeFromBegin()
        {
            if(head->getNext() != NULL)
            {
                delete head ;
                head->setNext(NULL);
                return true;
            }
            return false;
        }
        void removeFromLast()
        {
            Node * t = head;
            Node * t1 = t->getNext();
            while(t1->getNext() != NULL)
            {
                t = t->getNext();
                t1 = t1->getNext();
            }
            delete t1;
            t->setNext(NULL);
        }
        int getFirstElement()
        {
                return (head->getData());   
        }
        int getLastElement()
        {
            if(!isEmpty())
            {
                while(head->getNext() !=NULL)
                {
                    head = head->getNext();
                }
                return head->getData();
            }
        }
        int printAll()
        {
            if(!isEmpty())
            {
                Node* temp=head;
                while (temp != NULL)
                {
                    cout << temp->getData() <<"  ";
                    temp = temp->getNext();
                }
}
        }
};
int main()
{
    Linkedlist l;
    cout<<l.isEmpty()<<endl;
    for(int i =0 ; i<100 ; i++)
    {
        cout<<l.insertAtBegin(i+1)<<"  ";
    }
    cout<<endl;
    l.getLenght();
    cout<<endl;
    l.insertAtLast(546);
    cout<<endl;
    cout<<l.getFirstElement();
    cout<<endl;
    cout<<l.getLastElement();
    cout<<endl;
    cout<<l.printAll();
    cout<<endl;
    cout<<l.removeFromBegin();
    cout<<endl;
    l.removeFromLast();
    return 0;
}
