//
// Created by Amin on 2019-10-12.
//

#ifndef CIRCLE_QUEUE_CIRCLEQUEUE_H
#define CIRCLE_QUEUE_CIRCLEQUEUE_H

template  <class T>
class CircleQueue {
private:
    int size ;
    int front ;
    int rear ;
    T *arr ;
public:
    CircleQueue(int);
    ~CircleQueue();
    bool is_full() ;
    bool is_empty() ;
    void enQueue(T) ;
    T deQueue();
};


#endif //CIRCLE_QUEUE_CIRCLEQUEUE_H
