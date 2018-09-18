#ifndef Node_h
#define Node_h
#include "PriorityQueue.hpp"
using namespace std;


class Node
{
public:
    int priority;
    int info;
    Node(int classID, int student){
        info = classID;
        priority = student;
    }
    Node* next;
    
};
#endif /* Node_h */

