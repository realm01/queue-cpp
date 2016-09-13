template <typename T>
Queue<T>::Queue(void) {
  first = NULL;
  last = NULL;
  size_int = 0;
}

template <typename T>
Queue<T>::~Queue(void) {
  if(first != NULL)
    delete first;
  if(last != NULL)
    delete last;
}

template <typename T>
Queue<T>::Queue::Node::Node(const T& item) {
  this->item = item;
  next = NULL;
}

template <typename T>
Queue<T>::Queue::Node::~Node(void) {
  if(next != NULL)
    delete next;
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
