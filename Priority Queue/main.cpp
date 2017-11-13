#include<stdio.h>
#include<stdlib.h>
#include <iostream>
#include <iomanip>
#include <string>
#include "PriorityQueue.hpp"
#include "Node.h"
using namespace std;

// Driver of the program
int main()

{
    
    int choice, item, priority;
    
    PriorityQueue pq;
    
    do
        
    {
        
        cout<<"1.Insert\n";
        
        cout<<"2.Delete\n";
        
        cout<<"3.Display\n";
        
        cout<<"4.Quit\n";
        
        cout<<"Enter your choice : ";
        
        cin>>choice;
        
        switch(choice)
        
        {
                
            case 1:
                cout<<"Input the item value to be added in the queue : ";
                
                cin>>item;
                
                cout<<"Enter its priority : ";
                
                cin>>priority;
                
                pq.insert(item, priority);
                
                break;
                
            case 2:
                
                pq.del();
                
                break;
                
            case 3:
                
                pq.display();
                
                break;
                
            case 4:
                
                break;
                
            default :
                
                cout<<"Wrong choice\n";
                
        }
        
    }
    
    while(choice != 4);
    
    return 0;
    
}
