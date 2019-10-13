//
// Created by Amin on 2019-10-12.
//

#include "CircleQueue.h"

template<class T>
CircleQueue<T>::CircleQueue(int size) {
    this->size = size ;
    this->front = -1 ;
    this->rear = -1;
    this->arr = new T[size] ;
}


template <class T>
bool CircleQueue<T>::is_empty() {
    if(front == rear) return true ;
    return false ;
}

template <class T>
bool CircleQueue<T>::is_full() {
    if((front%size) == (rear+1)%size) return true ;
    return false ;
}

template <class T>
void CircleQueue<T>::enQueue(T value) {
    if(is_full){
        throw "Queue is full";
        return ;
    }
    arr[(++rear)%size] = value;
}
template <class T>
T CircleQueue<T>::deQueue(){
    if(is_empty){
        throw "Queue is empty";
        return ;
    }
    return arr[(++front)%size];
}