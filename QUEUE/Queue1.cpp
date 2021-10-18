#include<iostream>
using namespace std;

//linear - queue

class Queue
{
    private:
    int rear;
    int front;
    int arr[5];

    public:
    Queue()
    {
        rear=-1;
        front=-1;

        for(int i=0;i<5;i++)
        {
            arr[i]=0;  //all elts of array 0 ; o/p:0 0 0 0 0
        }

    }

    bool isempty()
    {
        if(front==-1&&rear==-1)
            return true;
        else
            return false;
        
    }

    bool isfull()
    {
        if(rear==4)
            return true;
        else
            return false;
        
    }

    int Enqueue(int val)
    {
        if(isfull())
        {
            cout<<"List Full ";
            
        }
        else if(isempty())
        {
            rear=0;
            front=0;
            arr[rear]=val;
        }
        else
        {
            rear++;
            arr[rear]=val;
        }
        
    }

    int dequeue()
    {
        int x=0;
        if(isempty())
        {
            cout<<"List Empty ";
            return 0;
        }
        else if(front==rear)
        {
            x=arr[front];
            arr[front]=0;
            rear=-1;
            front=-1;
            return x;
        }
        else
        {
            x=arr[front];
            arr[front]=0;
            front++;
            return x;
        }
        
        
    }

    int count()
    {
        cout<<"Count :"<<(rear-front+1);
    }

    int display()
    {
        for(int i=0;i<5;i++)
        {
            cout<<arr[i]<<" ";
        }
    }


};

int main()
{
    Queue q1;
    int n,val1;
    do
    {
        cout<<"\n************************MENU************************\n";
        cout<<"1]isempty()\n2]isfull()\n3]Enqueue\n4]Dequeue\n5]Count\n6]Display";
        cout<<"Select Your Choise : \n";
        cin>>n;
        switch(n)
        {
            case 0:
            break;

            case 1:
            cout<<"ISEMPTY OPERATION :-\n";
            if(q1.isempty())
                cout<<"Queue is Empty\n";
            else
                cout<<"Queue is Not Empty\n";
            break;

            case 2:
            cout<<"ISFULL OPERATION :-\n";
            if(q1.isfull())
                cout<<"Queue is Full\n";
            else
                cout<<"Queue is Not Full\n";
            break;

            case 3:
            cout<<"ENQUEUE OPERATION :-\nEnter value to enqueue : ";
            cin>>val1;
            q1.Enqueue(val1);
            break;

            case 4:
            cout<<"DEQUEUE OPERATION :-\n";
            q1.dequeue();
            break;

            case 5:
            cout<<"COUNT OPERATION :-\n";
            q1.count();
            break;

            case 6:
            cout<<"DISPLAY OPERATION :-\n";
            q1.display();
            break;

            default:
                cout<<"Enter Proper Option Number !";
            break;
        }   
        


    } while (n!=0);
    
}