// implementation of queue class as a template
#include<iostream>
#include<cstdlib>
using namespace std;

const int MAX = 20;
template<class T> //template class that access on any data type
class Queue
{
    private:
    T arr[MAX];
    int rear;
    public:
    Queue();
    void add(T data);
    T remove(); //to remove element from queue
    int size(); //to return size of the queue
};
template<class T>
Queue<T> ::Queue()
{
    rear = 0; //constructor initialize value of rear to zero to indicate 1st position of array
}
template<class T>
void Queue<T> :: add(T data)
{
    if(rear>=MAX)
    {
        cout<<"Queue is full"<<endl;
    }
    else
    arr[rear++] = data;

}
template<class T>
T Queue<T> :: remove()
{
    T front;
    if(rear == 0)
    cout<<"Queue is empty"<<endl;
    else{
        front = arr[0];
        rear--;
        for(int i=0; i<rear; ++i)
        arr[i]=arr[i+1];

    }
    return front;

}
template<class T>
int Queue<T>::size()
{
    return(rear);
}
int main()
{
    cout<<"Queue for integer"<<endl;
    Queue<int>q1;
    q1.add(11);
    q1.add(33);
    q1.add(44);
    cout<<"Size of queue before removal is:"<<q1.size()<<endl;
    cout<<"Item removed from queue:"<<q1.remove()<<endl;
    cout<<"Size of queue after one removal:"<<q1.size()<<endl;
    cout<<"Queue for float"<<endl;
    Queue<float>q2;
    q2.add(1.1);
    q2.add(3.3);
    q2.add(4.4);
    cout<<"Size of queue before removal is:"<<q2.size()<<endl;
    cout<<"Item removed from queue:"<<q2.remove()<<endl;
    cout<<"Size of queue after one removal:"<<q2.size()<<endl;
    cout<<"Queue for character"<<endl;
    Queue<char>q3;
    q3.add('A');
    q3.add('B');
    q3.add('C');
    cout<<"Size of queue before removal is:"<<q3.size()<<endl;
    cout<<"Item removed from queue:"<<q3.remove()<<endl;
    cout<<"Item removed from queue:"<<q3.remove()<<endl;
    cout<<"Size of queue after two removal:"<<q3.size()<<endl;
}

