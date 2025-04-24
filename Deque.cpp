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
  for(int i = 0; i < capacity; i++)
    delete[] blockmap[i];
  delete blockmap[];
}


/**
 * Initializes an empty deque
 *
 * @pre 
 * @post 
 * 
 */
Deque::Deque():elements(0), front(NULL), back(NULL), blockSize(0), blockAmount (0), capacity(blockSize * blockAmount)
{
}

void Deque::push_front(int valuex)
{
  
}
