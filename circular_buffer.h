// Copyright, Roberto Herrera
#ifndef CIRCULAR_BUFFER_H
#define CIRCULAR_BUFFER_H

#include <iostream>
#include <vector>

template <class T>
class CircularBuffer {
 public:
  int head;
  int tail;
  int cap;
  int size;
  T arr[10];

 public:
  CircularBuffer() : head(-1), tail(-1), size(0), cap(10){};
};
#endif
