[![Build Status](https://travis-ci.org/realm01/queue-cpp.svg?branch=master)](https://travis-ci.org/realm01/queue-cpp)
Queue
=====
Usage
-----
```c++
Queue<int>* myqueue = new Queue<int>();

myqueue->addLast(2);
myqueue->deleteFirst(void);
myqueue->getFirst(void);
myqueue->isEmpty(void);
myqueue->size(void);
```

CI
--
travis CI and stuff