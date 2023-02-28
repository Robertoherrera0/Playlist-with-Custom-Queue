#ifndef QUEUE_H
#define QUEUE_H

#include <iostream>
#include "circular_buffer.h"

template <class T>
class Queue {
  private:
    CircularBuffer<T> buffer;

  public:
    Queue<T>() {};

  // O(1)
  void push(T data) {
    if (buffer.head == -1 && buffer.tail == -1) {
      buffer.head = 0;
      buffer.tail = 0;
      buffer.arr[buffer.head] = data;
      buffer.size++;
    }
    else if (buffer.tail < (buffer.cap-1)) {
      buffer.tail++;
      buffer.arr[buffer.tail] = data;
      buffer.size++;
    }
    else if (buffer.tail >= buffer.cap-1) {
      buffer.tail = 0;
      buffer.arr[buffer.tail] = data;
      buffer.size++;
    }
  }

  // O(1)
  void pop() {  
    buffer.size--;
    if (buffer.head == buffer.cap-1) {
      buffer.head = 0;
    } else {
      buffer.head++;
    }
  }

  // O(1)
  T front()  { return buffer.arr[buffer.head];}

  // O(1)
  bool empty() {
    if (buffer.size <= 0) {
      return true;
    } else {
      return false;
    }
  }
};
#endif