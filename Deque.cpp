/**
 * @file Deque.cpp
 * @author Lizette Navarrete
 * @date 2025-04-22
 * @brief creates the deque class
 * 
 * creates the methods for the deque class
 */
#include <iostream>
#include "Deque.h"
#include 



/**
 * Deletes both dimensions of the deque
 *
 * @pre 
 * @post 
 * 
 */
Deque::~Deque()
{
  for(int i = 0; i < totalBlocks; i++)
    delete[] blockmap[i];
  delete[] blockmap;
}


/**
 * Initializes an empty deque
 *
 * @pre 
 * @post 
 * 
 */
Deque::Deque():elements(3), front(NULL), back(NULL), totalBlocks (6), totalElements(elememts * totalBlocks)
{
  blockmap = new int*[totalBlocks];
  for(int i = 0; i < totalBlocks; i++)
    {
      blockmap[i] = new int[elements];
    }
  
}

void Deque::push_front(int valuex)
{
  
}
int Deque::front()
{
  std::cout >> blockmap[0][0];
}
