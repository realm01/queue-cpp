/*
* Created by: Anastassios Martakos
*
* Copyright 2016 Anastassios Martakos
*
* This program is free software: you can redistribute it and/or modify it
* under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
* GNU General Public License for more details.
*/

#ifndef __QUEUE_H
#define __QUEUE_H

#ifndef NULL
#define NULL 0
#endif

template <typename T>
class Queue {
  private:
    class Node {
      friend class Queue;
      private:
        T item;
        Node* next;
      public:
        Node(const T& item);
    };
    Node* first;
    Node* last;
    unsigned int size_int;

  public:
    Queue(void);
    void addLast(const T& item);
    T deleteFirst(void);
    T getFirst(void);
    bool isEmpty(void);
    int size(void);
};

#include "queue.cpp"

#endif
