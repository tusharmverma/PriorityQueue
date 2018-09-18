//
//  PriorityQueue.h
//  Priority Queue
//
//  Created by Tushar  Verma on 9/18/17.
//  Copyright © 2017 Tushar Verma. All rights reserved.
//

#ifndef PriorityQueue_h
#define PriorityQueue_h
#include<stdio.h>
#include<stdlib.h>
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

/*
 
 * Node Declaration
 
 */

class node

{
public:
    
    int priority;
    
    int info;
    
    node *link;
    
};

/*
 
 * Class Priority Queue
 
 */

class Priority_Queue

{
    
private:
    int numOfValues = 999;
    node* front[numOfValues] = {};
    
public:
    
    Priority_Queue()
    
    {
        
        front = NULL;
        
    }
    
    /*
     
     * Insert into Priority Queue
     
     */
    
    void insert(int item, int priority)
    
    {
        
        node *tmp, *q;
        
        tmp = new node;
        
        tmp->info = item;
        
        tmp->priority = priority;
        
        if (front == NULL || priority < front->priority)
            
        {
            
            tmp->link = front[0];
            
            front[0] = tmp;
            
        }
        
        else
            
        {
            
            q = front[priority];
            
            while (q->link != NULL && q->link->priority <= priority)
                
                q=q->link;
            
            tmp->link = q->link;
            
            q->link = tmp;
            
        }
        
    }
    
    /*
     
     * Delete from Priority Queue
     
     */
    
    void del()
    
    {
        
        node *tmp;
        
        if(front == NULL)
            
            cout<<"Queue Underflow\n";
        
        else
            
        {
            
            tmp = front;
            
            cout<<"Deleted item is: "<<tmp->info<<endl;
            
            front = front->link;
            
            free(tmp);
            
        }
        
    }
    
    /*
     
     * Print Priority Queue
     
     */
    
    void display()
    
    {
        
        node *ptr;
        
        ptr = front[0];
        
        if (front == NULL)
            
            cout<<"Queue is empty\n";
        
        else
            
        {	cout<<"Queue is :\n";
            
            cout<<"Priority       Item\n";
            
            while(ptr != NULL)
                
            {
                
                cout<<ptr->priority<<"                 "<<ptr->info<<endl;
                
                ptr = ptr->link;
                
            }
            
        }
        
    }
    
};


#endif /* PriorityQueue_h */
