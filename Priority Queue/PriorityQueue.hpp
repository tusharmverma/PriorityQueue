#ifndef SparseTable_hpp
#define SparseTable_hpp

#include <stdio.h>
#include "Node.h"
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

const int numOfPriorities = 999;
const int numOfInfos = 9999;

class PriorityQueue
{
public:
    Node* arrayOfValues[numOfInfos] = {}; //Create a array of Pointers for CRN's
    
    void insert(int item, int priority)
    
    {
        Node *tmp, *q;
        
        tmp = new Node(item,priority);
        
        tmp->info = item;
        
        tmp->priority = priority;
        
        if (arrayOfValues[0] == NULL || priority < arrayOfValues[0]->priority)
            
        {
            
            tmp->next = arrayOfValues[0];
            
            arrayOfValues[0] = tmp;
            
        }
        
        else
            
        {
            
            q = arrayOfValues[0];
            
            while (q->next != NULL && q->next->priority <= priority)
                
                q=q->next;
            
            tmp->next = q->next;
            
            q->next = tmp;
            
        }
        
    }
    
    
    void del()
    
    {
        
        Node *tmp;
        
        if(arrayOfValues[0] == NULL)
            
            cout<<"Queue Underflow\n";
        
        else
            
        {
            
            tmp = arrayOfValues[0];
            
            cout<<"Deleted item is: "<<tmp->info<<endl;
            
            arrayOfValues[0] = arrayOfValues[0]->next;
            
            free(tmp);
            
        }
        
    }
    
    /*
     
     * Print Priority Queue
     
     */
    
    void display()
    
    {
        
        Node *ptr;
        
        ptr = arrayOfValues[0];
        
        if (arrayOfValues[0] == NULL)
            
            cout<<"Queue is empty\n";
        
        else
            
        {    cout<<"Queue is :\n";
            
            cout<<"Priority          Item\n";
            
            while(ptr != NULL)
                
            {
                
                cout<<ptr->priority<<"                 "<<ptr->info<<endl;
                
                ptr = ptr->next;
                
            }
            
        }
    }
};




/**
 * @brief Add StudentID and CourseID to Node
 *
 *      Adds the Student and Course ID to the Node by creating array of pointers
 *
 * @param    int ClassID , int student
 *
 * @return  none
 */


/*
 
 * Class Priority Queue
 
 */


#endif /* SparseTable_hpp */

