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

  // delete myqueue;

  return 0;
}
