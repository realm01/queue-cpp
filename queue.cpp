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

template <typename T>
Queue<T>::Queue(void) {
  first = NULL;
  last = NULL;
  size_int = 0;
}

template <typename T>
Queue<T>::Queue::Node::Node(const T& item) {
  this->item = item;
  next = NULL;
}

template <typename T>
void Queue<T>::addLast(const T& item) {
  Node** curr_node = NULL;
  if(first == NULL)
    curr_node = &first;
  else
    curr_node = &(last->next);

  *curr_node = new Node(item);
  last = *curr_node;
  size_int++;
}

template <typename T>
T Queue<T>::deleteFirst(void) {
  T tmp = first->item;
  first = first->next;
  size_int--;

  return tmp;
}

template <typename T>
T Queue<T>::getFirst(void) {
  return first->item;
}

template <typename T>
bool Queue<T>::isEmpty(void) {
  if(size_int == 0)
    return true;
  else
    return false;
}

template <typename T>
int Queue<T>::size(void) {
  return size_int;
}
