/**
 * @file Deque.cpp
 * @author Lizette Navarrete
 * @date 2025-04-22
 * @brief creates the deque class
 * 
 * creates the methods for the deque class
 */

Deque::~Deque()
{
  for(int i = 0; i < capacity; i++)
    delete[] blockmap[i];
  delete blockmap[];
}

Deque::Deque():elements(0), front(NULL), back(NULL)
{
  
}
