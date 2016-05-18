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

#include <iostream>
#include "queue.h"

using namespace std;

int main() {
  Queue<int>* myqueue = new Queue<int>();

  myqueue->addLast(2);
  myqueue->addLast(4);

  cout << "size: " << myqueue->size() << endl;

  cout << myqueue->deleteFirst() << endl;
  cout << myqueue->getFirst() << endl;

  cout << "empty: " << myqueue->isEmpty() << endl;
  cout << "size: " << myqueue->size() << endl;

  return 0;
}
