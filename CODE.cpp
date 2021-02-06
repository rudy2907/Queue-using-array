/* Question-5 Program used for performing the queue using array */

#include <iostream>
using namespace std;

int A[5],f=-1,r=-1; // declaration of array and the front and rear en values

bool isempty()  // function used to check if queue is full or not
{
    if(f==-1 && r==-1)
    {
        return true;
    }
    else
    {
        return false;
    }
}
void enqueue(int v) // enqueue operation used for adding an element to the queue
{
    if(r==4)
    {
        cout<<"The Given Array is full no more element can be inserted"<<endl;
    }
    else
    {
        if(f==-1)
        {
            f=0;
        }
        r++;
        A[r]=v;
    }
}

void dequeue() // operation used for deleting an element from queue
{
    if(f==-1 && r==-1)
    {
        cout<<"The element cannot be removed since queue is empty"<<endl;
    }
    else
    {
        if(f==r)
        {
            f=r=-1;
        }
        else
        {
            f++;
        }
    }
}
void show_front() // used for displaying the element at front of queue
{
    if(f==-1 && r==-1)
    {
        cout<<"The Given array is empty"<<endl;
    }
    else
    {
        cout<<"The Element at front is = "<< A[f]<<endl;
    }
}

void display() // displaying the queue
{
    if(f==-1 && r==-1)
    {
        cout<<"The Given Queue is empty cannot be displayed"<<endl;
    }
    else
    {
        for(int i=f;i<=r;i++)
        {
            cout<< A[i]<<" "<<endl;
        }
    }
}


int main() // main function
{
   
    enqueue(2);
    enqueue(3);               /* first through enqueue 5 values have been passed to be stored in the array then the array is displayed and the value
    enqueue(1);                  at front after which the operation of dequeue has been performed till queue/array becomes empty */
    enqueue(4);
    enqueue(5);
    display();
    show_front();
    dequeue();
    display();
    show_front();          
    dequeue();                
    display();
    show_front();
    dequeue();
    display();
    show_front();
    dequeue();
    display();
    show_front();
    dequeue();
    display();
    show_front();

    return 0;
}
        
    
