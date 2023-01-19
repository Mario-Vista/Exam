//
// Created by rioma on 18/01/23.
//

#ifndef ASDCLION_MAXPRIORITYQUEUE_H
#define ASDCLION_MAXPRIORITYQUEUE_H
#include "MaxHeap.h"
#include <vector>
#include <iostream>

class MaxPriorityQueue:private MaxHeap{
public:
    MaxPriorityQueue(vector<int> *);
    MaxPriorityQueue();

    int extractMax();
    int maximum();

    void queueInsert(int);
    void increasePriority(int, int);
    void print();
};

MaxPriorityQueue::MaxPriorityQueue(vector<int> *) : MaxHeap(tree) {

}

MaxPriorityQueue ::MaxPriorityQueue(){

}

int MaxPriorityQueue::maximum() {
    
}



#endif //ASDCLION_MAXPRIORITYQUEUE_H
