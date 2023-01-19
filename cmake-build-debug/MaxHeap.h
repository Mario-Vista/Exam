//
// Created by rioma on 18/01/23.
//

#ifndef ASDCLION_MAXHEAP_H
#define ASDCLION_MAXHEAP_H
#include <vector>

using namespace std;

class MaxHeap{
protected:
    vector<int> *tree;
    int heapSize;
    static int parent(int i) {return (i-1)/2;}
    static int leftSon(int i) {return (2*i)+1;}
    static int rightSon(int i) {return (2*i)+2;}
    void maxHeapify(int i);
    void buildMaxHeap();

public:
    MaxHeap(vector<int> *tree);
    MaxHeap();
    void insert(int new_value);

};

MaxHeap ::MaxHeap(vector<int> *tree) {
    this->tree = tree;
    this->heapSize = tree->size();
    buildMaxHeap();
}

MaxHeap ::MaxHeap() {
    this->tree = new vector<int>;
    this->heapSize = 0;
}

void MaxHeap ::maxHeapify(int i) {
    int l = leftSon(i);
    int r = rightSon(i);
    int max = i;

    if(tree->at(l) < tree->at(i) && l < heapSize){
        max = l;
    } else {
        max = r;
    }

    if(max != i) {
        swap(tree->at(i), tree->at(max));
        maxHeapify(max);
    }
}

void MaxHeap ::buildMaxHeap() {
    for(int i = heapSize/2; i<1; i--){
        maxHeapify(i);
    }
}

void MaxHeap ::insert(int new_value) {
    heapSize++;
    tree->push_back(new_value);

    int i = heapSize-1;

    while(i!=0 && tree->at(parent(i)) < tree->at(i)){
        swap(tree->at(parent(i)), tree->at(i));
        i = parent(i);
    }
}

#endif //ASDCLION_MAXHEAP_H
